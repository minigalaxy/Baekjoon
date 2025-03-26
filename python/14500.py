from collections import deque
import sys
import copy

input = sys.stdin.readline

board_scale = list(map(int,input().split()))
board = []

for i in range(board_scale[0]):
    board.append(list(map(int,input().split())))
    
class Tetro():
    def __init__(self,shape):
        self.shape = list(shape)
        self.x = len(shape[0])
        self.y = len(shape)
        
    def solve(self):
        if self.x > board_scale[1] or self.y > board_scale[0]:
            return 0
        
        res = 0
        
        for i in range(board_scale[0]-self.y+1):
            for j in range(board_scale[1]-self.x+1):
                t = 0
                
                for k in range(self.y):
                    for l in range(self.x):
                        if self.shape[k][l] == 1:
                            t += board[k+i][l+j]
                
                res = max(res,t)
                
        return res
                     
            
t = []
res = 0

t.append(Tetro([[1,1,1,1]]))
t.append(Tetro([[1],[1],[1],[1]]))
t.append(Tetro([[1,1],[1,1]]))
t.append(Tetro([[1,0],[1,0],[1,1]]))
t.append(Tetro([[0,1],[0,1],[1,1]]))
t.append(Tetro([[0,0,1],[1,1,1]]))
t.append(Tetro([[1,0,0],[1,1,1]]))
t.append(Tetro([[1,1],[0,1],[0,1]]))
t.append(Tetro([[1,1],[1,0],[1,0]]))
t.append(Tetro([[1,1,1],[1,0,0]]))
t.append(Tetro([[1,1,1],[0,0,1]]))
t.append(Tetro([[1,0],[1,1],[0,1]]))
t.append(Tetro([[0,1],[1,1],[1,0]]))
t.append(Tetro([[0,1,1],[1,1,0]]))
t.append(Tetro([[1,1,0],[0,1,1]]))
t.append(Tetro([[1,1,1],[0,1,0]]))
t.append(Tetro([[1,0],[1,1],[1,0]]))
t.append(Tetro([[0,1,0],[1,1,1]]))
t.append(Tetro([[0,1],[1,1],[0,1]]))

for s in t:
    res = max(res,s.solve())
    
print(res)
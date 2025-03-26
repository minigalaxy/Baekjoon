from collections import deque
import sys

input = sys.stdin.readline

class Dice():
    def __init__(self,pos):
        self.pos = pos
        
        self.x_sides = deque([0,0,0,0]) #가로 한바퀴
        self.y_sides = deque([0,0,0,0]) #세로 한바퀴
    
    def roll(self,d):
        if d == 1:
            self.x_sides.rotate(1)
            self.y_sides[0] = self.x_sides[0]
            self.y_sides[2] = self.x_sides[2]
        elif d == 2:
            self.x_sides.rotate(-1)
            self.y_sides[0] = self.x_sides[0]
            self.y_sides[2] = self.x_sides[2]
        elif d == 3:
            self.y_sides.rotate(1)
            self.x_sides[0] = self.y_sides[0]
            self.x_sides[2] = self.y_sides[2]
        elif d == 4:
            self.y_sides.rotate(-1)
            self.x_sides[0] = self.y_sides[0]
            self.x_sides[2] = self.y_sides[2]
            
    def move(self,d):
        if d == 1:
            self.pos[0] += 1
        elif d == 2:
            self.pos[0] -= 1
        elif d == 3:
            self.pos[1] -= 1
        elif d == 4:
            self.pos[1] += 1
            
    def solve(self,com):
        for c in com:
            self.move(c)
            
            if (pos[0] < 0 or pos[1] < 0) or (pos[0] >= board_scale[0] or pos[1] >= board_scale[1]):
                self.move(c-1 if c % 2 == 0 else c+1)
                continue
            
            self.roll(c)
            
            if board[self.pos[1]][self.pos[0]] == 0:
                board[self.pos[1]][self.pos[0]] = self.x_sides[2]
            else:
                self.x_sides[2] = board[self.pos[1]][self.pos[0]]
                self.y_sides[2] = board[self.pos[1]][self.pos[0]]
                board[self.pos[1]][self.pos[0]] = 0
                
            print(self.x_sides[0])
    
board_scale = [0,0]
pos = [0,0]
board = []
commands = []

#이 문제에서의 x,y 는 내가 생각하던(x 가로,y 세로)게 아니었구나...

board_scale[1],board_scale[0],pos[1],pos[0],k = map(int,input().split())

for i in range(board_scale[1]):
    board.append(list(map(int,input().split())))
    
commands = list(map(int,input().split()))
        
dice = Dice(pos)
dice.solve(commands)
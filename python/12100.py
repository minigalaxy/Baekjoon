import copy
import sys

input = sys.stdin.readline

board_scale = int(input())

board = [list(map(int,input().split())) for i in range(board_scale)]

res = 0
    
#속도를 위해 코드를 갈아 엎다. 전보다 10배 이상 빨라진 버전.
    
def solve(d):
    global res
        
        for dir in d:
            if dir == 0:
                for i in range(board_scale):
                    n = 0
                    
                    for j in range(1, board_scale):
                        if m[j][i]:
                            t = m[j][i]
                            m[j][i] = 0
                            
                            if m[n][i] == 0:
                                m[n][i] = t
                            elif t == m[n][i]:
                                m[n][i] *= 2
                                n += 1
                            else:
                                m[n+1][i] = t
                                n += 1
            elif dir == 1:
                for i in range(board_scale):
                    n = board_scale-1
                    
                    for j in range(board_scale-2,-1,-1):
                        if m[j][i]:
                            t = m[j][i]
                            m[j][i] = 0
                            
                            if m[n][i] == 0:
                                m[n][i] = t
                            elif t == m[n][i]:
                                m[n][i] *= 2
                                n -= 1
                            else:
                                m[n-1][i] = t
                                n -= 1
            elif dir == 2:
                for i in range(board_scale):
                    n = 0
                    
                    for j in range(1, board_scale):
                        if m[i][j]:
                            t = m[i][j]
                            m[i][j] = 0
                            
                            if m[i][n] == 0:
                                m[i][n] = t
                            elif t == m[i][n]:
                                m[i][n] *= 2
                                n += 1
                            else:
                                m[i][n+1] = t
                                n += 1
            elif dir == 3:
                for i in range(board_scale):
                    n = board_scale-1
                    
                    for j in range(board_scale-2,-1,-1):
                        if m[i][j]:
                            t = m[i][j]
                            m[i][j] = 0
                            
                            if m[i][n] == 0:
                                m[i][n] = t
                            elif t == m[i][n]:
                                m[i][n] *= 2
                                n -= 1
                            else:
                                m[i][n-1] = t
                                n -= 1
                                       
        res = max(res,max(map(max,m)))
        
for i in range(4):
    for j in range(4):
    	for k in range(4):
    		for l in range(4):
    			for m in range(4):
    				solve([i,j,k,l,m])
    
print(res)range(4):
    solve([i],1)
    
print(res)
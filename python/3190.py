from collections import deque
import math
import sys

input = sys.stdin.readline

board_scale = int(input())
apples = []
directions = []
snake = deque([(0,0)])
t_dir = 0
r_dir = (0,1)
res = 0

for i in range(int(input())):
    apples.append(input().split())
    
apples = list(map(lambda p: (int(p[0])-1,int(p[1])-1),apples))
    
for i in range(int(input())):
    directions.append(input().split())
    
directions = deque(map(lambda d: (int(d[0]),d[1]),directions))

def addpos(a,b):
    return (a[0]+b[0],a[1]+b[1])

def set_dir(d):
    global t_dir
    global r_dir
    
    if d == "L":
        t_dir -= 1
    elif d == "D":
        t_dir += 1
        
    t_dir = t_dir % 4
    
    r_dir = (int(math.sin(math.radians(t_dir*90)))),int(math.cos(math.radians(t_dir*90)))

#재귀함수에 미치지 말자. 때론 반복문으로도 해결된다.

def solve():
    global res
    
    c = 1
    
    while True:
        
        head = snake.pop()
        
        n_head = addpos(head,r_dir)
        
        if (n_head[0] >= board_scale or n_head[0] < 0 or n_head[1] >= board_scale or n_head[1] < 0) or (n_head in snake):
            res = c
            return

        snake.append(head)
        snake.append(n_head)
        
        if len(directions) > 0:
            d = directions.popleft()
            
            if d[0] == c:
                set_dir(d[1])
            else:
                directions.appendleft(d)
                
        if n_head in apples:
            apples.remove(n_head)
        else:
            snake.popleft()
        
        c += 1
    
solve()

print(res)
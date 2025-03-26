from collections import deque
import sys
import copy

input = sys.stdin.readline

res = []

days = int(input())

consulting = deque()

for i in range(days):
    consulting.append(tuple(map(int,input().split())))
    
def solve(r,l,a,c):
    
    l2 = copy.deepcopy(l)
    for i in l:
        t = copy.deepcopy(l2)
        f = True
        
        for _ in range(i[0]):
            if not len(t):
                f = False
                break
            t.popleft()
            
        if not f:
            l2.popleft()
            continue
        
        a.append(i)
        
        solve(r+i[1],t,a,c+1)
        l2.popleft()
    
    res.append(r)
    return

solve(0,consulting,[],0)

print(max(res))
from collections import deque
import sys

input = sys.stdin.readline

k = input() #알고리즘상 필요없는 입력값임.

numbers = deque(map(int,input().split()))
operaters = list(map(int,input().split()))

res = []

def solve(c,n,o):
    if c < -1000000000:
        c = -1000000000
    elif c > 1000000000:
        c = 1000000000
    
    if len(n):
        t = n.popleft()
    
        for i in range(4):
            if o[i]:
                o[i] -= 1
            
                if i == 0:
                    solve(c+t,n.copy(),o[:])
                elif i == 1:
                    solve(c-t,n.copy(),o[:])
                elif i == 2:
                    solve(c*t,n.copy(),o[:])
                else:
                    if c < 0:
                        solve(-(-c//t),n.copy(),o[:])
                    else:
                        solve(c//t,n.copy(),o[:])
                
                o[i] += 1
                    
    else:
        res.append(c)

solve(numbers.popleft(),numbers.copy(),operaters[:])

print(max(res))
print(min(res))

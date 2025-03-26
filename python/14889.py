from itertools import combinations,permutations
import sys

input = sys.stdin.readline

people = list(range(int(input())))
s = []
res = []

for _ in people:
    s.append(list(map(int,input().split())))
    
t = list(combinations(people,len(people)//2))
t = t[:len(t)//2+1]
    
for t1 in t:
    t2 = [x for x in people if x not in t1]
    
    r1 = 0
    r2 = 0
    
    for i,j in permutations(t1,2):
        r1 += s[i][j]
        
    for i,j in permutations(t2,2):
        r2 += s[i][j]
        
    res.append(abs(r1-r2))
    
print(min(res))
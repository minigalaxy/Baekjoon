from itertools import combinations #이걸 써야할줄은... 다행히도 시간은 획기적으로 단축
from collections import deque
import sys

input = sys.stdin.readline

lab_scale = tuple(map(int,input().split()))
lab = []
zero = []
virus = []
res = []

for _ in range(lab_scale[0]):
    lab.append(list(map(int,input().split())))
    
for i in range(lab_scale[0]):
        for j in range(lab_scale[1]):
            if lab[i][j] == 0:
                zero.append((i,j))
            elif lab[i][j] == 2:
                virus.append((i,j))
    
def gen_wall():
    for z in combinations(zero,3):
        l = [i[:] for i in lab]
            
        for t in z:
            l[t[0]][t[1]] = 1
        
        bfs(l,deque([deque(i[:]) for i in virus]),[])

def bfs(m,q,v):
    if len(q):
        while len(q):
            t = q.popleft()
            
            for d in [(1,0),(-1,0),(0,1),(0,-1)]:
                t2 = (t[0]+d[0],t[1]+d[1])
                
                if t2[0] < 0 or t2[1] < 0 or t2[0] >= lab_scale[0] or t2[1] >= lab_scale[1]:
                    continue
                
                if m[t2[0]][t2[1]] == 1 or t2 in v:
                    continue
                
                q.append(t2)
                v.append(t2)
                
                m[t2[0]][t2[1]] = 2
            
        bfs(m,q,v)
    else:
        c = 0
        
        for i in range(lab_scale[0]):
            for j in range(lab_scale[1]):
                if m[i][j] == 0:
                    c += 1
        
        res.append(c)
        
gen_wall()

print(max(res))
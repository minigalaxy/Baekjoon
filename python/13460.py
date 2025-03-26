map_y, map_x = map(int,input().split())

map = [list(input()) for i in range(map_y)]

redball = [0,0]
blueball = [0,0]
hole = [0,0]
sollution = 11

for i in range(map_y):
    for j in range(map_x):
        e = map[i][j]
        if e == "#":
            map[i][j] = 1
        elif e == ".":
            map[i][j] = 0
        elif e == "R":
            redball = [i,j]
            map[i][j] = 0
        elif e == "B":
            blueball = [i,j]
            map[i][j] = 0
        elif e == "O":
            hole = [i,j]
            map[i][j] = 0

def dir(d):
    if d == 0:
        return [1,0]
    elif d == 1:
        return [0,1]
    elif d == 2:
        return [0,-1]
    elif d == 3:
        return [-1,0]
  
def addpos(a,b):
    return [a[0]+b[0],a[1]+b[1]]
  
def solve(r,b,d,c):
    global sollution
    
    if c >= sollution:
        return
    
    if c > 10:
        return
    
    d = dir(d)
    
    v = False
    
    while map[r[0]+d[0]][r[1]+d[1]] == 0 and map[b[0]+d[0]][b[1]+d[1]] == 0:
        r = addpos(r,d)
        b = addpos(b,d)
            
        if r == hole:
            v = True
            r = [-1,-1]
            
        elif b == hole:
            return
        
    if map[r[0]+d[0]][r[1]+d[1]] == 0:
        while map[r[0]+d[0]][r[1]+d[1]] == 0 and addpos(r,d) != b:
            r = addpos(r,d)
        
            if r == hole:
                v = True
                r = [-1,-1]
                
    elif map[b[0]+d[0]][b[1]+d[1]] == 0:
        while map[b[0]+d[0]][b[1]+d[1]] == 0 and addpos(b,d) != r:
            b = addpos(b,d)
            
            if b == hole:
                return
            
    if v:
        sollution = c
        return
    
    for i in range(4):
        solve(r,b,i,c+1)
    
for i in range(4):
    solve(redball,blueball,i,1)

if sollution == 11:
    sollution = -1
    
print(sollution)
direction = [(-1,0),(0,1),(1,0),(0,-1)]

room_scale = tuple(map(int,input().split()))
loc = list(map(int,input().split()))

room = []

res = 0

for i in range(room_scale[0]):
    room.append(list(map(int,input().split())))
    
def move():
    global res
    
    while True:
        if room[loc[0]][loc[1]] == 0:
            room[loc[0]][loc[1]] = 2
            res += 1
            
        f = False
        
        for d in direction:
            n = (loc[0]+d[0],loc[1]+d[1])
            
            if room[n[0]][n[1]] == 0:
                f = True
                
        if f:
            for i in range(4):
                loc[2] -= 1
                loc[2] %= 4
                
                d = direction[loc[2]]
                n = (loc[0]+d[0],loc[1]+d[1])
                
                if room[n[0]][n[1]] == 0:
                    loc[0],loc[1] = n[0],n[1]
                    break
                
        else:
            d = direction[loc[2]]
            n = (loc[0]-d[0],loc[1]-d[1])
            
            if room[n[0]][n[1]] != 1:
                loc[0],loc[1] = n[0],n[1]
                
            else:
                break
                
move()

print(res)
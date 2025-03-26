N,L = map(int,input().split())
MAP = [list(map(int,input().split())) for _ in range(N)]

rows = []
cols = []

res = 0

def preprocess() -> None:
    for i in range(N):
        current = MAP[i][0]
        count = 0
        temp = []

        for j in range(N):
            if current != MAP[i][j]:
                if abs(current - MAP[i][j]) >= 2:
                    temp = 0
                    break
                else:
                    temp.append((count,MAP[i][j]-current))

                    current = MAP[i][j]
                    count = 1
            else:
                count += 1

        if temp != 0:
            temp.append((count,0))

            rows.append(temp)

    for i in range(N):
        current = MAP[0][i]
        count = 0
        temp = []

        for j in range(N):
            if current != MAP[j][i]:
                if abs(current - MAP[j][i]) >= 2:
                    temp = 0
                    break
                else:
                    temp.append((count,MAP[j][i]-current))

                    current = MAP[j][i]
                    count = 1
            else:
                count += 1

        if temp != 0:
            temp.append((count,0))

            cols.append(temp)

def solution():
    global res

    for i in range(len(rows)):
        t = True

        for j in range(len(rows[i])):
            p = 0

            if j > 0 and rows[i][j-1][1] == -1:
                p += L
            
            if j < len(rows[i]) - 1 and rows[i][j][1] == 1:
                p += L

            if p > rows[i][j][0]:
                t = False
                break    

        if t:
            res += 1 

    for i in range(len(cols)):
        t = True

        for j in range(len(cols[i])):
            p = 0

            if j > 0 and cols[i][j-1][1] == -1:
                p += L
            
            if j < len(cols[i]) - 1 and cols[i][j][1] == 1:
                p += L

            if p > cols[i][j][0]:
                t = False
                break    

        if t:
            res += 1       

preprocess()
solution()

print(res)
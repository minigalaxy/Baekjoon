import copy

N, M, H = map(int, input().split())

l = [[ 0 for _ in range(H) ] for _ in range(N - 1)]

p = []

for i in range(M):
    a, b = map(int, input().split())

    l[b - 1][a - 1] = 1

def chk(t):
    x = 0
    y = 0
    
    for i in range(N):
        x = i
        y = 0

        for j in range(H):
            if x > 0:
                if t[x - 1][y]:
                    x -= 1
                    y += 1
                    continue
            if x < N - 1:
                if t[x][y]:
                    x += 1
                    y += 1
                    continue
            y += 1

        if x != i:
            return False

    return True

def dfs(n, t, r):
    
    
res = dfs(0, l, 0)

if chk(l): res = 0

print(res)

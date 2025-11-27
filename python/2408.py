N = int(input())

res = ""

for _ in range(2 * N - 1): res += input()

print(eval(res.replace('/', '//')))

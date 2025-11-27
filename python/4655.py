while True:
    c = float(input())

    if(c == 0.00): break

    res = 0
    t = 2

    while c > 0:
        c -= 1.0 / t
        t += 1
        res += 1

    print(res, "card(s)")

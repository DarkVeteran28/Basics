n = 5
for i in range(1, n+1):
    start = i * (i + 1) // 2
    for x in range(start, start - i, -1):
        print(x, end=" ")
    print()

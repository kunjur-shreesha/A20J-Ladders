n, k = map(int, input().split())
odds, evens = (n + 1) // 2, n // 2
if k <= odds:
    print(int(k * 2) - 1)
else:
    print(int((k - odds) * 2))

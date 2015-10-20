k, m, n = map(int, input().split())
print((2 * n + min(k, n) - 1) // min(k, n) * m)
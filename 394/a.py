from fractions import gcd
a, b = map(int, input().split())
print(a / gcd(a, b))
from fractions import gcd
a = int(input())
b = 0
for i in range(1, a - 1):
	b += gcd(a, b) == 1
print(b)
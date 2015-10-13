n = int(input())
a = [list(map(int, input().split())) for i in range(n)]
for k in range(n):
	for i in range(n):
		for j in range(n):
			a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
for i in a:
	print(" ".join(map(str, i)))
print ([[input() for i in range(4)] for j in range(4)])
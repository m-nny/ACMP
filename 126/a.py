n = int(input())
a = [list(map(int, input().split())) for i in range(n)]
x = 100
for k in range(n):
	for i in range(n):
		for j in range(n):
			a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
for i in range(n):
	for j in range(n):
		print(a[i][j])
	print("\n")
	

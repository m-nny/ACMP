f = {0:0, 1:0, 2:0, 3:1}
def rec(x):
	if x not in f: f[x] = rec(x // 2) + rec((x + 1) // 2)
	return f[x];
n = int(input())
print(rec(n))
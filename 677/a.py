a, b, c = map(int, input().split())
if a + b >= c and a + c >= b and c + b >= a:
	print("YES")
else:
	print("NO")

from math import *
n, a = map(int, input().split())
print(["NO", "YES"][(a / (2 * sin(pi / n))) - (a / (2 * tan(pi / n))) < 1.0])
INF = 999

g = [
	[0, 5, INF],
	[INF, 0, 3],
	[0, 2, INF]
]

n = len(g)

for k in range(n):
	for i in range(n):
		for j in range(n):
			g[i][j] = min(g[i][j], g[i][k] + g[k][j])
			
for i in g:
	print(i)

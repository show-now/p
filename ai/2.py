graph = {
	'A': ['B', 'C'],
	'B': ['D', 'E'],
	'C': ['F', 'G'],
	'D': [],
	'E': [],
	'F': [],
	'G': []
}

def dfs(visited, graph, node):
	if node not in visited:
		visited.append(node)
		
		for n in graph[node]:
			dfs(visited, graph, n)
	
	return visited

print("DFS")
visited = dfs([], graph, "A")
print(visited)

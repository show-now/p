def bfs(graph, node):
	queue = []
	visited = []
	
	visited.append(node)
	queue.append(node)
	
	while queue:
		m = queue.pop(0)
		print(m, end=" ")
		
		for neighbor in graph[m]:
			if neighbor not in visited:
				visited.append(neighbor)
				queue.append(neighbor)
				
graph = {
	'A': ['B', 'C'],
	'B': ['D', 'E'],
	'C': ['F', 'I'],
	'D': [],
	'E': [],
	'F': [],
	'I': []
}

bfs(graph, 'A')

from collections import deque

def bfs_water_jug():
	visited = set()
	queue = deque()
	
	visited.add((0, 0))
	queue.append((0, 0))
	
	while queue:
		amt1, amt2 = queue.popleft()
		print(amt1, amt2)
		
		if amt1 == 2:
			print("Goal is reached")
			return
		
		possible_states = [
			(0, amt2),
			(amt1, 0),
			(4, amt2),
			(amt1, 3),
			
			(
				(amt1 - min(amt1, 3 - amt2)),
				(amt2 + min(amt1, 3 - amt2))
			),
			(
				(amt1 + min(amt2, 4 - amt1)),
				(amt2 - min(amt2, 4 - amt1))
			)
		]
		
		for state in possible_states:
			if state not in visited:
				visited.add(state)
				queue.append(state)
				
print("Water jug problem")
bfs_water_jug()

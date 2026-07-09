import heapq

def prim(graph):
    visited = set()
    heap = [(0, 'A')]

    while heap:
        w, node = heapq.heappop(heap)

        if node not in visited:
            visited.add(node)
            print(node, w)

            for nxt, cost in graph[node].items():
                if nxt not in visited:
                    heapq.heappush(heap, (cost, nxt))

graph = {
    'A': {'B': 1, 'C': 4},
    'B': {'A': 1, 'C': 2, 'D': 5},
    'C': {'A': 4, 'B': 2, 'D': 3},
    'D': {'B': 5, 'C': 3}
}

prim(graph)

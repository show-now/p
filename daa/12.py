def find(parent, i):
    if parent[i] == i:
        return i
    return find(parent, parent[i])

def union(parent, x, y):
    x = find(parent, x)
    y = find(parent, y)
    parent[x] = y

V = 4

edges = [
    (0, 1, 10),
    (0, 2, 6),
    (0, 3, 5),
    (1, 3, 15),
    (2, 3, 4)
]

edges.sort(key=lambda x: x[2])

parent = []

for i in range(V):
    parent.append(i)

mst = []

for u, v, w in edges:

    if find(parent, u) != find(parent, v):

        mst.append((u, v, w))

        union(parent, u, v)

print("Minimum Spanning Tree")

for u, v, w in mst:
    print(u, "-", v, "=", w)

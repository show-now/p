def optimal_bst(freq, n):
    cost = [[0] * n for _ in range(n)]

    for i in range(n):
        cost[i][i] = freq[i]

    for L in range(2, n + 1):
        for i in range(n - L + 1):
            j = i + L - 1

            cost[i][j] = float('inf')

            total_freq = sum(freq[i:j + 1])

            for r in range(i, j + 1):

                left = cost[i][r - 1] if r > i else 0
                right = cost[r + 1][j] if r < j else 0
                
                current_cost = left + right + total_freq
                cost[i][j] = min(cost[i][j], current_cost)

    return cost[0][n - 1]


freq = [34, 8, 50]
n = len(freq)

print("Optimal BST Cost:", optimal_bst(freq, n))

def max_area(R, C, matrix, queries):
    prefix = [[0] * (C + 1) for _ in range(R + 1)]
    for i in range(R):
        for j in range(C):
            prefix[i + 1][j + 1] = matrix[i][j] + prefix[i][j + 1] + prefix[i + 1][j] - prefix[i][j]

    def get_sum(x1, y1, x2, y2):
        if x1 < 0 or y1 < 0 or x2 >= R or y2 >= C:
            return float('inf')
        return (prefix[x2 + 1][y2 + 1]
                - (prefix[x1][y2 + 1] if x1 > 0 else 0)
                - (prefix[x2 + 1][y1] if y1 > 0 else 0)
                + (prefix[x1][y1] if x1 > 0 and y1 > 0 else 0))

    results = []
    for x, y, k in queries:
        low, high, best_area = 0, min(x, y, R - x - 1, C - y - 1), 0
        
        while low <= high:
            d = (low + high) // 2
            x1, y1 = x - d, y - d
            x2, y2 = x + d, y + d
            black_count = get_sum(x1, y1, x2, y2)
            
            if black_count <= k:
                best_area = (2 * d + 1) ** 2
                low = d + 1
            else:
                high = d - 1
        
        results.append(best_area)
    
    return results

R, C = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(R)]
Q = int(input())
queries = [tuple(map(int, input().split())) for _ in range(Q)]

results = max_area(R, C, matrix, queries)

print('\n'.join(map(str, results)))

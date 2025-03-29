def is_special_triangle(h, numbers):
    n = h * (h + 1) // 2
    if len(numbers) != n:
        return "NO"
    numbers.sort()
    idx = 0
    for row in range(1, h):
        for col in range(row):
            current = idx + col
            left_child = idx + row + col
            right_child = idx + row + col + 1
            if numbers[current] >= numbers[left_child] or numbers[current] >= numbers[right_child]:
                return "NO"
        idx += row
    return "YES"

h = int(input())
numbers = list(map(int, input().split()))

print(is_special_triangle(h, numbers))

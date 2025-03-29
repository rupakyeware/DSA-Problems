def solve_expression(equation: str) -> int:
    lhs, rhs = equation.split('=')

    constant_sum = 0
    x_sign = 0

    def process_side(side, sign):
        nonlocal constant_sum, x_sign
        num = 0 
        i = 0
        n = len(side)
        is_negative = False

        while i < n:
            char = side[i]
            if char == '+':
                is_negative = False
            elif char == '-':
                is_negative = True
            elif char.isdigit():
                num = 0
                while i < n and side[i].isdigit():
                    num = num * 10 + int(side[i])
                    i += 1
                constant_sum += sign * (-num if is_negative else num)
                continue 
            elif char == 'X':
                x_sign += sign * (-1 if is_negative else 1)
            i += 1

    process_side(lhs, 1)
    process_side(rhs, -1)

    return -constant_sum // x_sign


import sys
input = sys.stdin.read
equation = input().strip()

print(solve_expression(equation))

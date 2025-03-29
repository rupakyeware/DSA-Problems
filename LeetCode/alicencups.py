def find_ball_position(moves: str) -> int:
    bpos = 1

    swap_map = {
        'A': {1: 2, 2: 1, 3: 3},
        'B': {1: 1, 2: 3, 3: 2},
        'C': {1: 3, 2: 2, 3: 1},
    }

    for move in moves:
        bpos = swap_map[move][bpos]

    return bpos

moves = input().strip()
print(find_ball_position(moves))

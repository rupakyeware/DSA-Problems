def messenger_ravens(M, N, difficulties):
    MOD = 10**9 + 7
    D_total = 0
    for d in difficulties:
        D_total ^= d
    if M % 2 == 0:
        return 0
    else:
        return D_total % MOD

M, N = map(int, input().split())
difficulties = list(map(int, input().split()))

print(messenger_ravens(M, N, difficulties))

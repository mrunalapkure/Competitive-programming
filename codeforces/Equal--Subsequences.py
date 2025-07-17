def solve(n, k):
    ones = k
    zeros = n - k
    s = []

    # Interleave 1s and 0s
    while ones > 0 and zeros > 0:
        s.append('1')
        ones -= 1
        if zeros > 0:
            s.append('0')
            zeros -= 1

    # Add remaining 1s or 0s
    s.extend(['1'] * ones)
    s.extend(['0'] * zeros)

    print(''.join(s))

# Read input
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    solve(n, k)
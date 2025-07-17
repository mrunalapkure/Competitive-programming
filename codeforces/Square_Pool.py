def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    results = []

    for _ in range(t):
        n = int(data[idx])
        m = int(data[idx + 1])
        idx += 2

        found = False
        for r in range(1, n + 1):
            min_sum = r + (n - 1)
            max_sum = r * n
            if min_sum <= m <= max_sum:
                # Found valid root r
                extra = m - min_sum
                result = [str(r)]
                current = 1
                children = [r]
                used = {r}
                for i in range(1, n + 1):
                    if i == r:
                        continue
                    if extra > 0:
                        parent = children[current]
                        current += 1
                        extra -= 1
                    else:
                        parent = r
                    result.append(f"{parent} {i}")
                    children.append(i)
                    used.add(i)
                results.append(result)
                found = True
                break
        if not found:
            results.append(["-1"])

    for res in results:
        print("\n".join(res))

# Example usage:
# Input should be fed through stdin, or you can call `solve()` and input manually.

from collections import deque

def min_cost(a, b, x, y):
    MAX = 200  
    dist = [float('inf')] * (MAX + 1)
    dist[a] = 0
    dq = deque()
    dq.append(a)
    
    while dq:
        curr = dq.popleft()
        
        if curr == b:
            return dist[curr]

        if curr + 1 <= MAX and dist[curr + 1] > dist[curr] + x:
            dist[curr + 1] = dist[curr] + x
            dq.append(curr + 1)

        new_val = curr ^ 1
        if new_val <= MAX and dist[new_val] > dist[curr] + y:
            dist[new_val] = dist[curr] + y
            dq.append(new_val)
    
    return -1 if dist[b] == float('inf') else dist[b]

t = int(input())
for _ in range(t):
    a, b, x, y = map(int, input().split())
    print(min_cost(a, b, x, y))

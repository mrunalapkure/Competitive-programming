from collections import deque
import sys
input = sys.stdin.read
sys.setrecursionlimit(1 << 25)

def solve():
    data = input().split()
    idx = 0
    T = int(data[idx])
    idx += 1
    results = []
    
    for _ in range(T):
        n, st = int(data[idx]), int(data[idx+1])
        idx += 2
        st -= 1  
        w = list(map(int, data[idx:idx+n]))
        idx += n

        adj = [[] for _ in range(n)]
        for _ in range(n-1):
            u, v = int(data[idx])-1, int(data[idx+1])-1
            adj[u].append(v)
            adj[v].append(u)
            idx += 2
        
        # 1. BFS from root (node 0) to compute distance
        dist = [-1]*n
        dist[0] = 0
        q = deque([0])
        while q:
            u = q.popleft()
            for v in adj[u]:
                if dist[v] == -1:
                    dist[v] = dist[u] + 1
                    q.append(v)
        
        # 2. BFS from start node to simulate movement
        visited = [set() for _ in range(n)]
        q = deque()
        q.append((st, 1, 0))  # (node, life, time)
        visited[st].add(0)
        max_moves = 0
        
        while q:
            u, life, t = q.popleft()
            
            # Apply weight
            life += w[u]
            if life == 0 or dist[u] <= t:
                continue
            
            # Try all adjacent moves
            for v in adj[u]:
                if t+1 not in visited[v]:
                    visited[v].add(t+1)
                    q.append((v, life, t+1))
                    max_moves = max(max_moves, t+1)
        
        results.append(str(max_moves))
    
    print("\n".join(results))

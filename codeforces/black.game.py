t = int(input())

for _ in range(t):
    n = int(input())
    
    if n <= 3:
        print("Alice")
    elif n % 2 == 0:
        print("Bob")
    else:
        print("Alice")

t = int(input())  

for _ in range(t):
    s = input().strip()  
    if len(s) != 6 or not s.isdigit():
        print("NO") 
        continue

    left_sum = int(s[0]) + int(s[1]) + int(s[2])
    right_sum = int(s[3]) + int(s[4]) + int(s[5])

    if left_sum == right_sum:
        print("YES")
    else:
        print("NO")

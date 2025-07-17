from itertools import permutations

def can_form_square(l1, b1, l2, b2, l3, b3):
    area = l1 * b1 + l2 * b2 + l3 * b3
    side = int(area ** 0.5)
    if side * side != area:
        return False
    
    rects = [(l1, b1), (l2, b2), (l3, b3)]

    for a, b, c in permutations(rects):
        la, ba = a
        lb, bb = b
        lc, bc = c

        if la == lb == lc == side and ba + bb + bc == side:
            return True

        if ba == bb == bc == side and la + lb + lc == side:
            return True

        if ba == bb and ba + bc == side and la + lb == side and lc == side and bc == side:
            return True
        
        if la + max(lb, lc) == side and max(ba, bb + bc) == side and \
           lb == lc and bb + bc == side and ba == side:
            return True

    return False

t = int(input())
for _ in range(t):
    l1, b1, l2, b2, l3, b3 = map(int, input().split())
    if can_form_square(l1, b1, l2, b2, l3, b3):
        print("YES")
    else:
        print("NO")

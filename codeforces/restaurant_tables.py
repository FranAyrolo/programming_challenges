n, a, b = map(int, input().split())
people = list(map(int, input().split()))
denied = 0
parcials = 0


for group in people:
    if group == 1:
        if a > 0:
            a -= 1
        elif b > 0:
            b -= 1
            parcials += 1
        elif parcials > 0:
            parcials -=1
        else:
            denied += 1
    else:
        if b > 0:
            b -= 1
        else:
            denied += 2
    
print(denied)

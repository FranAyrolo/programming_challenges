length = int(input())
t_chocolate = list(map(int, input().split()))
    
iA = 0
iB = len(t_chocolate) -1
tA, tB = 0, 0
comeA, comeB = 0, 0

while iA <= iB:
    if tA <= tB:
        tA += t_chocolate[iA]
        iA += 1
        comeA += 1
    else:
        tB += t_chocolate[iB]
        iB -= 1;
        comeB += 1

print(comeA, comeB)

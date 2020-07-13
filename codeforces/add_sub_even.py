n_cases = int(input())

cases = []
for i in range(n_cases):
    n,k = map(int,input().strip().split())
    cases.append((n, k))


for pair in cases:
    #a = pair[0]
    #b = pair[1]
    a, b = (pair)
    if a == b:
        print(0)
    elif a < b:
        if (a % 2) == (b % 2):
            print(2)
        else:
            print(1)
    elif a > b:
        if (a % 2) == (b % 2):
            print(1)
        else:
            print(2)

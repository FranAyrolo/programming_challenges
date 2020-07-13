n = int(input())
for i in range(n):
    m = int(input())
    lista = list(map(int, input().split()))
    print('NO') if sum(lista)%2 == 0 else print('YES')

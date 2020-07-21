n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

tabla_a = [0]*n
tabla_b = [0]*n

tabla_a[0] = a[0]
tabla_b[0] = b[0]

for i in range(1,n):
    tabla_a[i] = max(tabla_a[i-1], tabla_b[i-1]+a[i])
    tabla_b[i] = max(tabla_b[i-1], tabla_a[i-1]+b[i])

print(max(tabla_a[n-1], tabla_b[n-1]))

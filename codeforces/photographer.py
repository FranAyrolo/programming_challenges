def mi_min(lista):
    temp_min = INF
    temp_index = 0
    for i in range(len(lista)):
        if lista[i] < temp_min:
            temp_min = lista[i]
            temp_index = i
            
    return (temp_min, temp_index)

n, d = map(int,input().strip().split())
a, b = map(int,input().strip().split())

INF = 2 * 10**9 + 1
atendidos = 0
costos = []
clientes_servidos = []
clientes = range(n)

for i in range(n):
    baja, alta = map(int,input().strip().split())
    costos.append(baja*a + alta*b)
    
while d > 0 and atendidos != len(costos):
    cand, ind = mi_min(costos)
    if cand <= d:
        atendidos += 1
        clientes_servidos.append(ind+1)
        d -= cand
        costos[ind] = INF
    else:
        break
    
print(atendidos)
print(*clientes_servidos, sep = " ") 

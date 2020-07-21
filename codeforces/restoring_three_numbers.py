numbers = list(map(int, input().split()))
numbers.sort()

triple_sum = numbers[3]

print(triple_sum - numbers[0], triple_sum - numbers[1], triple_sum - numbers[2])

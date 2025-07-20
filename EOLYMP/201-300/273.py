a, b, c = map(int,input().split())
result = 1
for i in range(b):
    result = result * a
    result = result % c
print(result)

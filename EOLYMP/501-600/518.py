n = int(input())
ne = []
for i in range(n):
    e = [int(j) for j in input().split()]
    ne.append(sum(e))
    
for i in ne:
    print(i)

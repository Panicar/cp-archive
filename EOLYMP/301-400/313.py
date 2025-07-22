n = int(input())
while(n > 0):
    s = input()
    a = [int(i) for i in s.split('+')]
    print(sum(a))
    n -= 1

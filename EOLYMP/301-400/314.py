n = int(input())
while(n > 0):
    s = input()
    if('+' in s):
        a = [int(i) for i in s.split('+')]
        print(sum(a))
    else:
        a = [int(i) for i in s.split('-')]
        print(a[0] - a[1])
    n -= 1

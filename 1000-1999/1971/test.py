n = int(input())
for _ in range(n):
    x = input()
    if len(set(x))==1:
        print("NO")
    else:
        print("YES")
        print(x[-1] + x[:-1])

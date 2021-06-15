n=int(input())
x=y=t=0
max=0
for i in range(n):
    x,y=[int(x)for x in input().split()]
    t+=y-x
    if t>max:
        max=t
print(max)

n=int(input())
c=x=0
for i in range(n):
    s=input().split()
    c=s.count("1")
    if c>=2:
        x+=1
print(x)

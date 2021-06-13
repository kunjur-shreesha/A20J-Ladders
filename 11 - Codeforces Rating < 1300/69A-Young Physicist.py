n=int(input())
lst=[]
xs=ys=zs=0
for i in range(n):
    x,y,z=list(input().split())
    xs+=int(x)
    ys+=int(y)
    zs+=int(z)
if xs==0 and ys==0 and zs==0:
    print("YES")
else:
    print("NO")

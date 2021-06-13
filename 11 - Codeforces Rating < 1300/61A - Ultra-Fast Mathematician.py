x=list(input())
y=list(input())
l=[]
for i in range(len(x)):
    t=int(x[i])^int(y[i])
    l.append(t)
print(*l,sep='')

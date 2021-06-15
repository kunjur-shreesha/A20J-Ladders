n=[int(x) for x in input().split()]
n.sort()
c=0
for i in range(1,len(n)):
    if n[i-1]==n[i]:
        c+=1
print(c)

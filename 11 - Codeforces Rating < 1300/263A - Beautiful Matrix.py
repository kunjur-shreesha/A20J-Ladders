c=0
r=0
for i in range(5):
    s=list(input().split())
    if '1' in s:
        c=s.index('1')
        r=i
r+=1
c+=1
x=abs(r-3)
y=abs(c-3)
print(x+y)

s=input()
u=0
l=0
for i in s:
    if(i>='A' and i<='Z'):
        u+=1
    if(i>='a' and i<='z'):
        l+=1
if(l==u):
    print(s.lower())
elif(u<l):
    print(s.lower())
elif(u>l):
    print(s.upper())

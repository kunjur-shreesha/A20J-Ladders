t='HQ9'
s=[x for x in input()]
flag=False
for i in s:
    if i in t:
        if i=='+':
            flag=True
        else:
            flag=False
        flag = True




if(flag==True):
    print("YES")
else:
    print('NO')

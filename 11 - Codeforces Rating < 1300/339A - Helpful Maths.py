s=input()
x=[]
for i in s[::2]:
    x.append(i)
x.sort()
for i in range(len(x)):
    print(x[i],sep='',end='')
    if i<len(x)-1:
        print('+', sep='', end='')

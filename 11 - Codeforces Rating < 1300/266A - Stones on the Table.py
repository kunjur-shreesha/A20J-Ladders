n=int(input())
s=input()
t=0
for i in range(1,n):
    if(s[i-1]==s[i]):
        t+=1
print(t)

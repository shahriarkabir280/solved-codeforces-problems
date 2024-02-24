t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    count=0
    for k in range(n):
        if(s[k]=='Q'):
           count=count+1
        elif(count>0):
            count=count-1
            
    if(count==0):
        print("Yes")
    else:
        print("No")
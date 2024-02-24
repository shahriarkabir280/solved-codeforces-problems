s1=input()
s2=input()
p=s1.lower()
q=s2.lower()
a=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
if(p==q):
    print(0)
else:
   for k in range(len(s1)):
       if(p[k]!=q[k]):
          x,y=(a.index(p[k]),a.index(q[k]))
          break
   if(x>y):
       print(1)
   else:
       print(-1)
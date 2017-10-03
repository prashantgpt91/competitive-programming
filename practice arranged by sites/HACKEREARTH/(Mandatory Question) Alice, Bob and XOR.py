def fun(a):
     res= [a,1,a+1,0]
     return res[a%4]
 
 
def xor(a, b):
     return fun(b)^fun(a-1)
 
 
k = input()
while k>0:
    l,r = raw_input().split()
    l=int(l)
    r=int(r)
    print xor(l,r)
    k=k-1
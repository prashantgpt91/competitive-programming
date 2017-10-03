import math
mod = 1000000007
def pow_mod(x, y, z):
    number = 1
    while y:
        if y & 1:
            number = number * x % z
        y >>= 1
        x = x * x % z
    return number
x = input()
a = []
a.append(1)
for i in range(1,51):
	a.append((a[i-1]%mod * i%mod)%mod)
while x>0:
	m, n = raw_input().split()
	m = int(m)
	n = int(n)
	
	if m+1<n :
		print -1
	else:
		k = ((m+1)%mod * (a[m])%mod * (a[m])%mod)%mod
		l = a[(m+1-n)]%mod
		
		l = pow_mod(l,mod-2,mod)%mod
		k = (k%mod * l%mod)%mod
		
		print k
	x = x-1
 
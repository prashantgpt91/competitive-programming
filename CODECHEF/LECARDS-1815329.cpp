#include<iostream>
#include<algorithm>
#define mod 1000000007
//#define long long ll;
using namespace std;
unsigned long long int fact[1002],ifact[1002];

/*unsigned long long int pow3(unsigned long long int m,unsigned long long int n)
{
unsigned long long int k;
if(n==0)
return 1;
else if(n%2==0)
{k=pow3(m,n/2);return ((k%mod)*(k%mod))%mod;}
else
{k=pow3(m,n/2);return ((((k%mod)*(k%mod))%mod)*m)%mod;}
}
*/
unsigned long long pow3(unsigned long long a,unsigned long long b)
{
  unsigned long long r;
  if(!b) return 1;
  r = pow3(a,b/2);
  r = (r*r)%mod;
  if(b%2) r = (r*a)%mod;
  return r;
}
void F()
{
fact[0] = ifact[0] = 1;
for(int i=1;i<=1000;i++){
    fact[i] = (i*fact[i-1])%mod;
    ifact[i] = pow3(fact[i],mod-2)%mod;
    }
}

unsigned long long int C(unsigned long long int X,unsigned long long int Y)
{
 return //(fact[X] * ifact[X-Y] * ifact[Y])%mod;
 (((fact[X]*ifact[X-Y])%mod)*ifact[Y])%mod;
}

int main()
{
//freopen("oo.txt","r",stdin);
//freopen("out.txt","w",stdout);
F();
unsigned long long int t,i,j,k,n,ans;
scanf("%lld",&t);
while(t--)
{ans=0;
scanf("%lld",&n);
unsigned long long int a[n];
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
j=n;
k=n;

for(k=n;k>=(n/2)+1;k--)
ans=(ans+C(j,k))%mod;

printf("%lld\n",ans);
}
//system("pause");
}
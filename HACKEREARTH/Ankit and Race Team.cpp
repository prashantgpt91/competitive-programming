    #include<iostream>
    #include<cstdio>
    #include<algorithm>
    #include<cstring>
    #include<cmath>
    #include<vector>
    #include<cassert>
    #include<set>
    #include<queue>
    #include<map>
    using namespace std;
    #define vi vector < int >
    #define pb push_back
    #define ll long long
    #define llu unsigned long long
    #define MOD 1000000007
    #define INF 2000000000
    #define dbg(x) { cout<< #x << ": " << (x) << endl; }
    #define all(x) x.begin(),x.end()
    ll a[100005];
    ll fact[100005];
    ll invfact[100005];
long long int expo(long long int base, long long int exponent)
{
long long int result = 1;
while(exponent > 0)
{
if (exponent%2 == 1)
result = (result * base)%MOD;
exponent = exponent >> 1;
base = (base * base) % MOD;
}
return result;
}
    ll modpow(ll a,ll b)
    {
    ll res = 1;
    while(b)
    {
    if(b%2!=0)
    res = (res*a)%MOD;
    b >>= 1;
    a = (a*a)%MOD;
    }
    return res;
    }
    ll nCr(int n,int r)
    {
    ll res = fact[n];
    res = (res*invfact[r])%MOD;
    res = (res*invfact[n-r])%MOD;
    return res;
    }
    int main()
    {
    int t,n,i,k;
    fact[0]=fact[1]=1;
    for(i=2;i<=100000;i++)
    fact[i] = (i*fact[i-1])%MOD;
    invfact[100000] = expo(fact[100000],MOD-2);
    for(i=99999;i>=0;i--)
    invfact[i] = ((i+1)*invfact[i+1])%MOD;
    scanf("%d",&t);
    assert(1<=t && t<=100);
    while(t--)
    {
    scanf("%d%d",&n,&k);
    assert(1<=n && n<=100000);
    assert(1<=k && k<=n);
    for(i=0;i<n;i++)
    {
    scanf("%lld",&a[i]);
    assert(0<=a[i] && a[i]<=2000000000LL);
    }
    sort(a,a+n);
    ll ans = 0;
    for(i=0;i<n;i++)
    {
    if(n-i<k)
    break;
    ans = (ans + (a[i]*nCr(n-i-1,k-1)))%MOD;
    }
    printf("%lld\n",ans);
    }
    //system("pause");
    return 0;
    }

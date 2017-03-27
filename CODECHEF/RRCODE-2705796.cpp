#include<iostream>
#include<string.h>
#include<cstdio>

using namespace std;

int F(int N,int K,int Answer,char b,int A[])
{
	
	if(b=='A')
	{
      int ans=A[0];
         for(int j=1;j<N;j++)
            ans=(ans & A[j]);
       return (Answer & ans);
	}
	else if(b=='O')
	{
        
        int ans=A[0];
         for(int j=1;j<N;j++)
            ans=(ans | A[j]);
       return Answer|ans;
	}
	else if(b=='X')
	{
		if(K%2!=0)K=1;
		else K=2;
		int ans=A[0];
      	if(K==1)
         for(int j=1;j<N;j++)
            ans=(ans ^ A[j]);
         else ans=0;
       return Answer^ans;
	}
}

int main()
{
	int t,n,k,answer,i,j,opera,aa;
	cin>>t;
	string s;
	
	while(t--)
	{
		scanf("%d%d%d",&n,&k,&answer);
		
		int a[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		cin>>s;
		if(k!=0)
		aa=F(n,k,answer,s[0],a);
		else
		aa=answer;
		printf("%d\n",aa);
	}
	return 0;
}
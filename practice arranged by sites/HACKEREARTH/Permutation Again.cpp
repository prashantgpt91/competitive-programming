#include<iostream>
using namespace std;
int main()
{
	long long int t,n,a,s;
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>n;
		if(n==1)
		{ cout<<1<<endl; continue;}
		a=n-1;
		s=s+n-1;
		a--;
		s+=(a*(a+1))/2;
		s=s+a/2;
		cout<<s<<endl;
	}
}
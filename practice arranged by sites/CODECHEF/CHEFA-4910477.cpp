#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,i,j,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		unsigned long long int s=0;
		sort(a,a+n);
		for(i=n-1;i>=0;i-=2)
		{
			s=s+a[i];
		}
		cout<<s<<endl;
	}
}
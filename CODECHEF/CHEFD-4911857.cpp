#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int q,i,j,n;
	cin>>n;
	int a[n+1];
	for(i=1;i<=n;i++)
	cin>>a[i];
	int l,r,d,p,qtype;
	cin>>q;
	while(q--)
	{
		cin>>qtype;
		if(qtype==1)
		{
			cin>>l>>r>>p;
			for(i=l;i<=r;i++)
			{
				if(a[i]%p==0)
				a[i]=a[i]/p;
			}
		}
		if(qtype==2)
		{
			cin>>l>>d;
			a[l]=d;
		}
	}
	for(i=1;i<=n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
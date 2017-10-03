#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
 
 
#define inf 1000000009
int main()
{
	int i,j,k,l,n;
	char s[5100];
	double a[5100];
	scanf("%d",&n);
	gets(s);
	gets(s);
	double ans;
	vector<int > v;
	for(i=0;i<n;i++)
	{
		if(s[i]=='0')
		{
			a[i]=1;
			v.push_back(i);
			break;
		}
		else a[i]=0;
	}
	if(i==n)
	{
		cout<<"0.0000"<<endl;
		exit(0);
	}
	i++;
	
	for(;i<n;i++)
	{
		
		if(s[i]=='1')
		{
 
			a[i]=a[i-1];
			continue;
		}
		a[i]=pow(i+1,0.5);
		for(j=0;j<v.size();j++)
		{
			k=v[j];
			if(k==0)
				continue;
			a[i]=min(a[i],(double)a[k-1]+(double)pow(i-k+1,0.5));
		}
		if(a[i]>a[i-1]+1){a[i]=a[i-1]+1;
		v.push_back(i);}
 
		
	}
	a[n-1]=floor(a[n-1]*10000+0.5)/10000;
	printf("%0.4lf\n",a[n-1]);
	
	
 
}
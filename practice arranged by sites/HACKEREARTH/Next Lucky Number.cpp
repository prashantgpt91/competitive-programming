#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
 
int main()
{
	int t,i,j,l,f,g;
	cin>>t;
	char s[10000];
	while(t--)
	{
		cin>>s;
		int l=strlen(s);
		f=0;
		for(i=0;i<l;i++)
		{
			if(s[i]<='2')
			{
				f=2;
				for(j=i;j<l;j++)
				s[j]='3';
				break;
			}
			
			
		
			else if(s[i]=='4')
			{
				f=2;
				s[i]='5';
				for(j=i+1;j<l;j++)
				s[j]='3';
				break;
			}
			
			else if(s[i]>'5')
			{
				for(j=i;j<l;j++)
				s[j]='3';
				f=1;
				break;
			}
			else;
		}
		if(f==1)
		{
			g=0;
			for(j=i-1;j>=0;j--)
			{
				if(s[j]=='3')
				{s[j]='5'; g=1;break;}
				if(s[j]=='5')
				{
				s[j]='3';
				}
			}
			if(g==0)
			{
				for(j=0;j<=l;j++)
				cout<<"3";
				cout<<endl;
				continue;
			}
			else
			cout<<s<<endl;
		}
		else if(f==2)
		cout<<s<<endl;
		else
		{
			g=0;
			for(j=l-1;j>=0;j--)
			{
				if(s[j]=='3')
				{s[j]='5'; g=1; break;}
				if(s[j]=='5')
				{
				s[j]='3';
				}
			}
			if(g==0)
			{
				for(j=0;j<=l;j++)
				cout<<3;
				cout<<endl;	
			}
			else
			cout<<s<<endl;
		}
		
	}
	
}
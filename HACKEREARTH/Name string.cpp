#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
	int col[3];
	cin>>col[0]>>col[1]>>col[2];
	sort(col,col+3);
	int x,y;
	x=col[2];
	y=col[1];
	if(y==0 && x>0)
	cout<<1<<endl;
	else if(y<x)
	cout<<y*2+1<<endl;
	else if(y==x)
	cout<<y*2<<endl;
    }
}
	
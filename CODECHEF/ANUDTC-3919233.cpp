#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<cstdlib>
#include<cstring>
#include<ctype.h>
#include<string.h>
#define M 10
using namespace std;

int main()
{
	int n,i,t;
	float p;
	cin>>t;
	while(t--)
	{
	cin>>n;
	p=360/n;
	
	if(p*n==360)
	printf("y ");
	else 
	printf("n ");
	
	if(n<=360)
	printf("y ");
	else 
	printf("n ");
	
	if(n<=26)
	printf("y\n");
	else
	printf("n\n");
	}
}
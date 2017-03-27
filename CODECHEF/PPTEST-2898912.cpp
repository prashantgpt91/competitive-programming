// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#define gets gets_s
#define scanf scanf_s

using namespace std;

int c[105],p[105],ti[105],F[105][105];
int main()
{
	int t,n,w,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>w;
		for(i=1;i<=n;i++)
			cin>>c[i]>>p[i]>>ti[i];

			
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=w;j++)
			{
				F[i][j]=F[i-1][j];
				if(j>=ti[i])
				F[i][j]=max(F[i-1][j-ti[i]]+(c[i]*p[i]),F[i-1][j]);
			}
		}

		printf("%d\n",F[n][w]);
	}



	//system("pause");
    }
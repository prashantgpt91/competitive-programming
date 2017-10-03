#include<iostream>   


using namespace std;

int main()
{
int i,j,n;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];

printf("%d\n",n);
for(i=n;i>=1;i--)
printf("%d %d\n",i,i);


//system("pause");
}
#include<iostream>
#define max 317
using namespace std;
 
 
 
int main()
{
int tc,i,j,wgt;
cin>>tc;
while(tc--)
{
cin>>wgt;
if(wgt%2==0 && wgt>2)
printf("Deepa\n");
else
printf("Arjit\n");
}
}
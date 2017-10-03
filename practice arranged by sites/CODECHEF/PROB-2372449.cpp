#include<iostream>
using namespace std;

int main()
{
int t,t1,t2,t3,t4,i;
cin>>t;
while(t--)
{
cin>>t1>>t2>>t3>>t4;
float p1=t1+t2;
float p2=t1;
float p=p2/p1;
printf("%0.6f\n",p);
}
//system("pause");
}
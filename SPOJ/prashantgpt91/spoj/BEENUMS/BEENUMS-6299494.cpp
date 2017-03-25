#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long long int n;
cin>>n;
while(n!=-1)
{
long long int i,j;
long double p;
i=1+4*(n-1)/3;  //firstly we have to make 1 hexagon completely surrounded by six hexagon an then think for those 
p=sqrt(i);      //six hexagons being surrounded by first.This six hexagons are similarly to be surrounded just like 
j=p;            //first one which is completed with 19 hexagons.so pattern is 1,7,19,37.....
if(p==j)         //and this series forms a summation series whose differences are in A.P
cout<<"Y"<<endl;
else
cout<<"N"<<endl;
cin>>n;
}
return 0;
}
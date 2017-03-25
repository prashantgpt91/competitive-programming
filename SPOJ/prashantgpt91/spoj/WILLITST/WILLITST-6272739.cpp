#include<iostream>
using namespace std;

int main()
{
    unsigned long long n;
    cin>>n;
    while(n!=1)
    {
    if(n%2!=0){
    printf("NIE\n");
    break;}
    n=n/2;
    }
    if(n==1)
printf("TAK\n");
  return 0;
   }

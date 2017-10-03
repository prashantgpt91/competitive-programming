#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
unsigned long long int a;
cin>>a;
if(a%3==0 || (a+5)%6==0)
printf("yes\n");
else
printf("no\n");
}
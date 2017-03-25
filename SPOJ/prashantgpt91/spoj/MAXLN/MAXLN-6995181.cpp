#include<iostream>
using namespace std;
int main()
{
    int no_case;
    cin>>no_case;
    for(int i=1;i<=no_case;i++)
    {
    long long int ra;
    cin>>ra;
   
    double a=4*ra*ra+0.25;
 
    printf("Case %d: %0.2lf\n",i,a);
}
    
    return 0;
    }

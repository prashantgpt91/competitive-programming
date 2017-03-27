#include<iostream>
using namespace std;
int main()
{
          unsigned long long int n,rec;
          rec=0;
          cin>>n;
          for(int i=1;i<=n;i++)
          {
                  for(int j=i;j<=n;j++)
                  {if(i*j<=n)
                  rec=rec+1;
                  else
                  break;
                  }
                  }
                  cout<<rec<<endl;
          return 0;
          }


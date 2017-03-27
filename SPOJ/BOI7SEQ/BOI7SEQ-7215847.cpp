#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
  int n,i,j;
  long long int s=0;
  scanf("%d",&n);
 long long int a[n];
  for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    
    for(j=0;j<n-1;j++)
    {
     s+=max(a[j],a[j+1]); 
    }
    printf("%lld\n",s);
    
//    system("PAUSE");
}
                         


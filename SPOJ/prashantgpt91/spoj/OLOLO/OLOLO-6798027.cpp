#include<iostream>
using namespace std;
main()
{
      int n,p,ans=0;
      for(scanf("%d",&n);n--;)
      {
      scanf("%d",&p);
      ans^=p;
      }
      printf("%d",ans);
      //system("pause");
}
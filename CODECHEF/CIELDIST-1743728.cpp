#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
int t,i,j,k,m,mm;
double ds,dt,d;
 double p,p1;
 float ans=0;
 cin>>t;
 while(t--)
 {
 cin>>ds>>dt>>d;
 m=max(ds,dt);
 mm=min(ds,dt);
 if(ds==d && dt==d)
  ans=0;
 else if(ds+dt>d && ds+d>dt && dt+d>ds)
  ans=0;
  else if(ds+dt<=d)
   ans=d-ds-dt;
  else
  ans=m-d-mm;
  
 printf("%0.6f\n",ans);
 }
 //system("pause");
}
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
     int t,a,b,c,i,j;
     double p,p1;
     cin>>t;
     for(i=0;i<t;i++)
     {
       cin>>a>>b>>c;
       p=c/(a+b);
       for(j=0;j<1000;j++)
       {
       p1=p-((a*p)+(b*sin(p))-c)/(a+(b*cos(p)));
       //printf("%0.6lf\n",p1);
       p=p1;
       }
       printf("%0.6lf\n",p1);
     }
     //system("PAUSE");
return 0;
}
                        


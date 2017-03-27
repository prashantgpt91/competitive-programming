#include<stdio.h>
#include<math.h>
int main()
{ 
  int t,i;
  long double R,a,b,c,k1,A1,A,m,n,p,k;;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
  scanf("%Lf%Lf%Lf%Lf",&a,&m,&n,&p);
  A1=0.5*a*m;
  A=A1*3.0;
  b=(A1*2.0)/n;
  c=(A1*2.0)/p;
  R=(a*b*c)/(4.0*A);
  k1=sqrt(((9.0*R*R))-((a*a)+(b*b)+(c*c)));
  k=(2.0)*(k1/3.0);
  printf("%0.3Lf",A);
  printf("\t%0.3Lf\n",k);
  }
  return 0;
}




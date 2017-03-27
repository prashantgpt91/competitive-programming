#include<iostream>
#include<math.h>
//#include<conio.h>
#include<algorithm>

using namespace std;
int main()
{
    long long int a,b,c,m[3],i,j,p1=1,p2=1;
    while(1)
    { 
   for(i=0;i<3;i++)             
    cin>>m[i];
    if(m[0]==0 && m[1]==0 && m[2]==0)
     break;

    sort(m,m+3);
    //for(j=0;j<3;j++)
     //printf("%d\n",m[j]);
    
    p1=pow(m[0],2)+pow(m[1],2);
    
    
    p2=m[2]*m[2];
   // printf("%d %d\n",p1,p2);
    if(p1==p2)
    printf("right\n");
    else
    printf("wrong\n");
}


     return 0;
     //getch();
}     



#include<iostream>
#define MAX 1000
using namespace std;

int main()
{
   int t,k; 
    cin>>t;
    for(k=0;k<t;k++)
    {
                        int num[MAX]={0},carry=0,i,n,j,z=1;
   
                    num[MAX]=1;
    cin>>n;
    if(n!=0){
    while(n!=1)
    {
       for(i=MAX;i>0;i--)
        {
          num[i]=(num[i]*n)+carry;
          if(num[i]>9)
          {
             carry=num[i]/10;
             num[i]=num[i]%10;
          }
          else
            carry=0;
        }
        n--;
    }
    
                
//printf("factorial is:\n");

for(i=0;;i++)
{
   if(num[i]!=0)
   {
       j=i;
       break;
   }
}    
                                     
       

for(i=j;i<=MAX;i++)
cout<<num[i];
cout<<endl;

}
else
cout<<z<<endl;
} 

//getch();
return 0;
}   









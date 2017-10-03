	

#include<iostream>
using namespace std;
int main()
{
    int i,w,c1,j;
    cin>>i>>w;          //as floating point numbers are imprecise
    while(i!=-1||w!=-1)
    {
                       c1=0;
                       for(j=1;j<2000;j++)
                       {
                                          if((j*1000)==i)
                                          c1=1;
                                          if((j*1000)>i)
                                          break;
                       }
                       j--;
                       if(c1==1&&(37*j)==w)
                       cout<<"Y"<<endl;
                       else
                       cout<<"N"<<endl;
                       cin>>i>>w;
    }
//    system("PAUSE");
    return 0;
}
 



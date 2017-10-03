#include<iostream>
using namespace std;
int a[102][102],T[102][102];
int main()
{
    int t,n,i,j,k,c,p1,p2,p3,p4;
    double p;
    	scanf("%d",&t);
    
    while(t--)
    {
		scanf("%d",&n);
    for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	  {
       T[i][j]=-99999999;
      }
    }
    	
		for(i=0;i<n;i++)
		{
		 for(j=0;j<n;j++)
		 {
			scanf("%d",&a[i][j]);
         }
        }
        
        T[0][0]=0;
        T[0][1]=a[0][1];
        T[1][0]=a[1][0];
        T[1][1]=max(a[0][1],a[1][0])+a[1][1];
        
        for(i=0,j=2;j<n;j++)
        {
         T[i][j]=T[i][j-1]+a[i][j];
        }
        
        for(i=2,j=0;i<n;i++)
        {
         T[i][j]=T[i-1][j]+a[i][j];
        }
        
        
        for(i=1;i<n;i++)
        {
         for(j=1;j<n;j++)
         {
         
          /*p1=max((T[i-1][j-1]+a[i-1][j]),(T[i-1][j-1]+a[i][j-1]))+a[i][j];
          p2=T[i-1][j-2]+a[i][j-2]+a[i][j-1]+a[i][j];
          p3=T[i-2][j-1]+a[i-2][j]+a[i-1][j]+a[i][j];
          T[i][j]=max(p1,max(p2,p3));*/
          
          T[i][j]=max(T[i-1][j],T[i][j-1])+a[i][j];
          
         }
        }
        p=T[n-1][n-1];
        if(p>=0)
        printf("%0.6lf\n",p/((2*n)-3));
        else
        printf("Bad Judges\n");
        
        }
        //system("PAUSE");
}
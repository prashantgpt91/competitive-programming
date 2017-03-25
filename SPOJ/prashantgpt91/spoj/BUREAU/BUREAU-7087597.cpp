#include<iostream>
#include<string.h>
#include<vector>
#include<math.h>
using namespace std;

int main()
{

      int t=0,l=0,p=0,i=0,x=0,z=0,d=0,lol,sa;
      long long h=0,cnt=0;
      vector<int> f(1000001);
      long long int n;
      char s[15];
      scanf("%d",&t);
      while(t--)
      {cnt=0;d=0;
                scanf("%lld",&n);
                char a[n][15];
                bool b[n];
                
                for(int v=0;v<n;v++)
                b[v]=1;
                
                gets(a[i]);
                for(i=0;i<n;i++)
                gets(a[i]);
                
               
               for(int j=n-1;j>=0;j--)
               {
                     
                   strcpy(s,a[j]);
                   l=strlen(s);
                   p=0;
                   if(l>7)
                   {
                    for(sa=7;sa<l;sa++)           
                    p=p+(s[sa]-'0')*pow(10,l-sa-1);
                 
                   if(b[j]!=0){
                   b[p-1]=0; 
                   b[j]=1;}
                   
                   
                   }
                   else
                   {
                          
                   if(b[j]!=0)          
                   b[j]=1;
                   
                   }
               }
                 
                                   
               
                
                
        for(h=0;h<n;h++)
        {
         if(b[h]==1)
         {
         cnt++;     
         f[d]=h+1;
         d++;
        }
}  
        printf("%d\n",cnt);
        for(lol=0;lol<d;lol++)
        printf("%d ",f[lol]);
        
        printf("\n");
}
//system("PAUSE");      
return 0;  
}


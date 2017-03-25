#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  int t,c1,c2,c3,c4,c5,c6,i,l,j;
  cin>>t;
 int b;

  
  char s[100000];
   gets(s);
  for(j=0;j<t;j++)
  {c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;
  
   gets(s);
  //cin>>s;
   b=0;
   l=strlen(s);
   for(i=0;i<l;i++)
   {
     if(s[i]!='D' && s[i]!='u' && s[i]!='c' && s[i]!='k' && s[i]!='y' && s[i]!='.')              
     {
      printf("NO DUCKY!\n");
      b=2;
      break;                                     
     }
      if(s[i]=='D')
      c1++;
     else if(s[i]=='u')
      c2++;      
     else if(s[i]=='c')
      c3++;
     else if(s[i]=='k')
      c4++;
     else if(s[i]=='y')
      c5++;
     else if(s[i]=='.')
      c6++;
      
      //printf("%d %d %d %d %d %d\n",c1,c2,c3,c4,c5,c6);
      if(c1>=1 && c2>=1 && c3>=1 && c4>=1 && c5>=1){
      printf("DUCKY IS HERE!\n");b=1;break;}
  }
  if(b==0)
  printf("NO DUCKY!\n");
}
//system("PAUSE");
return 0;
}

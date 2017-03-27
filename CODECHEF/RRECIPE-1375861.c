#include<stdio.h>
#include<string.h>
#include<math.h>


int main()
{
  int t,i,j,l,cnt=0,b=0;
  char s[1000000];
  scanf("%d",&t);
  while(t--)
  {b=0;
   cnt=1;
   scanf("%s",s);
   l=strlen(s);
   for(i=0,j=l-1;j-i>=1;j--,i++)
   {
    if(s[i]!='?' && s[j]!='?' && s[i]!=s[j]){
    cnt=0;b=1;break;}
     
    if(s[i]=='?' && s[j]=='?')
    cnt=(cnt*26)%10000009;
    
    if((s[i]=='?' && s[j]!='?') || (s[j]=='?' && s[i]!='?'))
    cnt*=1;
	
   }
 	 if(l%2!=0 && s[l/2]=='?' && b==0)
	   cnt=(cnt*26)%10000009;
        else;	
	 
    printf("%d\n",cnt%10000009);
}
//system("PAUSE");
}
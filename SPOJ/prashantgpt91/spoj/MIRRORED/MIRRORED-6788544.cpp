#include<iostream>
#include<string.h>

using namespace std;

int main()
{
   char a[3];
 
   int i=0,j=0,c=0;
   gets(a);
   while(a[0]!=32 && a[1]!=32)
   {
    if(c==0)
    {
    printf("Ready\n");
    c++;
    }
    if((a[0]=='p' && a[1]=='q') || (a[0]=='q' && a[1]=='p') || (a[0]=='b' && a[1]=='d') || (a[0]=='d' && a[1]=='b') )
    printf("Mirrored pair\n");
    else
    printf("Ordinary pair\n");
    gets(a);
      }
      gets(a);
   //system("PAUSE");
   return 0;
} 
    

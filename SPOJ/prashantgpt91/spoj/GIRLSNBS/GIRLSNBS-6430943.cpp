#include<iostream>
using namespace std;

int main()
{
    int B,G,min=0,P;
    while(1)
    {
        cin>>B>>G;
            
     if(B==-1 && G==-1)
     break;
     
    
     if(B>G)
       P=(B+G)/(G+1);
      else
       P= (B+G)/(B+1);
      
       printf("%d\n",P); }     
      return 0;
}



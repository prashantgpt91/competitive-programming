#include<stdio.h>
#include<math.h>
	 
	int main()
	{
	  
	  int i,j,k;
	  float len,sum=0;
	 
	  while(1)
	  {
	    scanf("%f",&len);
	    if(len==0.00) break;
	    sum=0;
	    i=2;
	    while(1)
	    {
	       
	      sum=sum+(float)1/(i);
	      if(sum>=len) break;
	      ++i;
	    }
	   printf("%d card(s)\n",i-1);
	 
	  }
	 
	return 0;

	}

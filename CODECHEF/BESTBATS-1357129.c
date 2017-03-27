//http://www.codechef.com/COOK21/problems/BESTBATS
#include <stdio.h>
#include <string.h>
//#include<conio.h>

int main()
{
	int t, i, j, k, got, score[101];
	long long a, b;
	scanf("%d",&t);
	while(t--)
	{
         
		memset(score,0,sizeof score); //initialising the array values to zero	
	
		for(i=0;i<11;i++)
		{
			scanf("%d",&k);
			score[k]++; //finding the occurence of each element in array
		}
	
		
		scanf("%d",&got);
		for(i=100;;got-=score[i--]) 
                if(score[i]>=got)
			{
				a = b = 1;
				for(j=0;j<got;j++)
                                 {
                                 a*=score[i]-j;
                                 b*=(j+1);
                                 //this loop is the No. of ways to compute C(m,k)
                                 }
				printf("%lld\n",a/b);
				break;
			}
	}
	//getch();
	return 0;
}

/*
 Its easy to see that to get the maximum sum,
  we need to pick the elements in non-increasing order. 
  We start picking elements and suppose there are M players with 
  score S and we need to still pick K more players. 
  If K > M, then all the players having score S should be taken,
  otherwise K <= M and we need to select K players from these M players. 
 This is the only choice we have to make.
 */
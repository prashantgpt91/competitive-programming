#include<iostream>
#include<algorithm>
#include<cstdio>
#include<math.h>

using namespace std;
// the maximal value for A[i]
const int maxA = 100000;

// minp[x] is the minimal prime divisor of x
// this array initialized by zeros since it is defined outside any function
int minp[maxA + 1];

int gcd(int a, int b) {
	while (b > 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}



int main()
{
    int t,n,i,p,ans;
    // we calculate minp[x] using sieve of Eratosthenes
	// in O(maxA * log(log(maxA))) time
	minp[1] = -1;
	for (int i = 2; i <= maxA; ++i) {
		if (minp[i] == 0) {
			for (int j = i; j <= maxA; j += i) {
				if (minp[j] == 0) {
					minp[j] = i;
				}
			}
		}
	}

      
      cin>>t;
      while(t--)
      {
       ans=0;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
      cin>>a[i];
      
      //computing gcd
      p=a[0];
      for(i=1;i<n;i++)
      p=gcd(a[i],p);
      
      printf("%d\n",minp[p]);
}
      
      //system("PAUSE");
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[100005];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,j;
	int cnt=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];

	sort(a,a+n);
	int p=a[0];
	for(i=1;i<n;i++)
		{
		if(a[i]-p>4)
			{
			cnt++;
			p=a[i];
			}
		}
	cout<<cnt+1<<endl;
    return 0;
}

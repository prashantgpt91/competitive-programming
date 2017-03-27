/* try.cpp : Defines the entry point for the console application.

struct event{
int x,y;
};
bool compare1(event i1, event i2)
{  return (i1.y < i2.y)? true: false; }
bool compare2(event i1, event i2)
{  return (i1.x < i2.x)? true: false; }

freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
*/



#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<time.h>
#include<assert.h>
#include<stdlib.h>
#include<map>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<bitset>
#define inf 2000000009
#define pause system("PAUSE")

using namespace std;
int a[5002],cost[5002];


/*
Let S[pos] be defined as the smallest integer that ends an increasing sequence of length pos.

Now iterate through every integer X of the input set and do the following:

    If X > last element in S, then append X to the end of S. This essentialy means we have found a new largest LIS.

    Otherwise find the smallest element in S, which is >= than X, and change it to X. Because S is sorted at
	any time, the element can be found using binary search in log(N).

Total runtime - N integers and a binary search for each of them - N * log(N) = O(N log N)

Now let's do a real example:

Set of integers: 2 6 3 4 1 2 9 5 8

Steps:

0. S = {} - Initialize S to the empty set
1. S = {2} - New largest LIS
2. S = {2, 6} - New largest LIS
3. S = {2, 3} - Changed 6 to 3
4. S = {2, 3, 4} - New largest LIS
5. S = {1, 3, 4} - Changed 2 to 1
6. S = {1, 2, 4} - Changed 3 to 2
7. S = {1, 2, 4, 9} - New largest LIS
8. S = {1, 2, 4, 5} - Changed 9 to 5
9. S = {1, 2, 4, 5, 8} - New largest LIS

So the length of the LIS is 5 (the size of S).

To reconstruct the actual LIS we will again use a parent array. Let parent[i] be 
the predecessor of element with index i in the LIS ending at element with index i.

To make things simpler, we can keep in the array S, not the actual integers, 
but their indices(positions) in the set. We do not keep {1, 2, 4, 5, 8}, 
but keep {4, 5, 3, 7, 8}.

That is input[4] = 1, input[5] = 2, input[3] = 4, input[7] = 5, input[8] = 8.

If we update properly the parent array, the actual LIS is:

input[S[lastElementOfS]], 
input[parent[S[lastElementOfS]]],
input[parent[parent[S[lastElementOfS]]]],
........................................

Now to the important thing - how do we update the parent array? There are two options:

    If X > last element in S, then parent[indexX] = indexLastElement. This means the
	parent of the newest element is the last element. We just prepend X to the end of S.

    Otherwise find the index of the smallest element in S, which is >= than X, and 
	change it to X. Here parent[indexX] = S[index - 1].
*/
int n;
//finding smallest element greater than x
int ceilSearch(vector<int>arr, int low, int high, int x)
{
  int mid;

  /* If x is smaller than or equal to the first element,
    then return the first element */
  if(x <= arr[low])
    return low;

  /* If x is greater than the last element, then return -1 */
  if(x > arr[high])
    return -1;

  /* get the index of middle element of arr[low..high]*/
  mid = (low + high)/2;  /* low + (high - low)/2 */

  /* If x is same as middle element, then return mid */
  if(arr[mid] == x)
    return mid;

  /* If x is greater than arr[mid], then either arr[mid + 1]
    is ceiling of x or ceiling lies in arr[mid+1...high] */
  else if(arr[mid] < x)
  {
    if(mid + 1 <= high && x <= arr[mid+1])
      return mid + 1;
    else
      return ceilSearch(arr, mid+1, high, x);
  }

  /* If x is smaller than arr[mid], then either arr[mid]
     is ceiling of x or ceiling lies in arr[mid-1...high] */
  else
  {
    if(mid - 1 >= low && x > arr[mid-1])
      return mid;
    else
      return ceilSearch(arr, low, mid - 1, x);
  }
}



int main()
	{
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	if(n==1)
		{
		cout<<"1\n";
		exit(0);
		}

	vector<int>v;
	v.push_back(a[1]);
	//cout<<v.back()<<endl;
	//printf("v ka back\n");
	
	for(i=2;i<=n;i++)
		{
		if(a[i]>v.back()){
	//printf("v ka back  ");
			v.push_back(a[i]);//cout<<v.back()<<endl;pause;
			}
		else
			{
			int p=ceilSearch(v,0,v.size()-1,a[i]);
			//printf("no chance\n");
			//cout<<v[p]<<" v[p] hai\n";
			//pause;
			v[p]=a[i];
			}
		/*for(j=0;j<v.size();j++)
			cout<<v[j]<<" ";
		printf("\n");
		pause;*/
		}
	cout<<v.size()<<endl;
	//for(j=0;j<v.size();j++)
			//cout<<v[j]<<" ";
	//pause;
	}











		


		



		





#include<iostream>

#include<queue>

using namespace std;

int main()
{
	int i,j,k,w,n,min,max,sum=0;
	scanf("%d %d",&n,&w);
	int A[n];
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	
  deque<int> Q;
  deque<int> P;
  for (i = 0; i < w; i++) {
    while (!Q.empty() && A[i] >= A[Q.back()])
      Q.pop_back();
		Q.push_back(i);
     while (!P.empty() && A[i] <= A[P.back()])
      P.pop_back();
    P.push_back(i);
  }
  
  	
  for (i = w; i < n; i++) {
	//cout<<A[Q.front()]<<" "<<A[P.front()]<<endl;    
    min=A[Q.front()];
    
    max=A[P.front()];
    if(min-max==w-1)
    sum++;
    while (!Q.empty() && Q.front() <= i-w)
      Q.pop_front();
    while (!P.empty() && P.front() <= i-w)
      P.pop_front();	
    while (!Q.empty() && A[i] >= A[Q.back()])
      Q.pop_back();
     while (!P.empty() && A[i] <= A[P.back()])
      P.pop_back();
    
    Q.push_back(i);
    P.push_back(i);
  }
  if(A[Q.front()]-A[P.front()]==w-1)
  sum++;
  
  printf("%d\n",sum);
  //B stores the maximum of every contiguous sub-array of size k    
}
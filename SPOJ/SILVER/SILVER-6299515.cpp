//#include<stdio.h>
 
#include<iostream>
 
#include<math.h>
 
using namespace std;
 
int main()
 
{
 
int n;
 
M:
 
cin>>n;
 
if(n!=0)
 
{
 
n=log(n)/log(2);/*Cut the Silver Bar is really very nice problem. It could be counted as one of the best problem on SPOJ which requires less coding and more thinking .You may notice pattern in the problem so use pen and paper. For n = 1 it is obvious miner don’t need to cut any thing just give the bar. For n = 2 , miner need to cut the bar at length of 1 and first day give first bar and second day second bar so total cut 1 . For n = 3 , miner cuts the bar in to 1 + 2 length. First day he give the unit length to creditor and second day he take the unit length and give creditor 2 length bar . Finally third day he gives the unit length to creditor making it 3 . Now problem is like for given value of N , we have to break it in such a way that using some combination we can create all the possible value from 1 to N . Lets say we have N = 7 and i cut it in to [ 1 , 2 , 4] so am i able to produce all the values from 1 to 7 ? Clear 1 , 2 and 4 are there so i need 3 = 1 + 2 , 5 = 1 + 4 , 6 = 4+ 2 and 7 = 1 + 2 + 4 . For n = 9 its 1 + 2 + 3 + 3 . Try to verify it for 1 to 9 . */
 
cout<<n<<endl;
 
goto M;
 
}
 
//system("pause");
 
return 0;
 
}


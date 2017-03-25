#include<cstdio>
#include<iostream>
//#include<conio.h>
using namespace std;

/*Generally, as a programmer you don't need to concern yourself about operations at the bit level. You're free to think in bytes, or ints and doubles, or even higher level data types composed of a combination of these. But there are times when you'd like to be able to go to the level of an individual bit. Exclusive-or encryption is one example when you need bitwise operations.

http://www.cprogramming.com/tutorial/bitwise_operators.html
http://www.cprogramming.com/tutorial/xor.html

Another example comes up when dealing with data compression: what if you wanted to compress a file? In principle, this means taking one representation and turning it into a representation that takes less space. One way of doing this is to use an encoding that takes less than 8 bits to store a byte. (For instance, if you knew that you would only be using the 26 letters of the Roman alphabet and didn't care about capitalization, you'd only need 5 bits to do it.) In order to encode and decode files compressed in this manner, you need to actually extract data at the bit level.

Finally, you can use bit operations to speed up your program or perform neat tricks. (This isn't always the best thing to do.) */


int pow(int b, int e)
{
int result = (e & 1) ? b % 10000007 : 1;  //e&1 means if e is odd
while( e > 1 )
{
b = ((long long int)b * b) % 10000007;
e >>= 1;                               //this means division by 2
//printf("%d\n",e);
if( e & 1 )
result = ((long long int)result * b) % 10000007;
}
return result;
}

int main()
{
int n,k;
while(1)
{
scanf("%d%d",&n,&k);
if(n==0 && k==0)
break;
int t1=pow(n-1,k);
int t2=pow(n,k);
int t3=pow(n-1,n-1);
int t4=pow(n,n);
t1=(2*t1)%10000007;
t3=(2*t3)%10000007;
//printf("%d\n%d\n%d\n%d\n",t1,t2,t3,t4);

int ans;
ans=(((t1+t2)%10000007+t3)%10000007+t4)%10000007;
printf("%d\n",ans);
}
//getch();
return 0;
}

 




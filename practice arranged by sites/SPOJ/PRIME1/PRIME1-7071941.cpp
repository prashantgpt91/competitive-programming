#include<iostream>
#include<math.h>

using namespace std;
#define lol 32000

bool mudgal[lol];  //all are by default initialsed to 0;


int main() 
{
          
int m, n, t;
mudgal[0] = mudgal[1] = 1;
for (int i = 2; i <lol; i++) 
{
if (mudgal[i]!=1)
 {
for (int j = 2; i * j <lol; j++)
mudgal[i * j] = 1;
}
}
//for(int d=0;d<10;d++)
//printf("%d ",mudgal[d]);
 
cin >> t;
while (t--) 
{
cin >>n>>m;


for (int i = n; i <= m; i++) 
{
           
bool p;
if(i==1)   //done for n=starting values;
p=0;
else
p=1;


for(int j=2;j*j<=i;j++) 
{
if (mudgal[j]!=1)
 {
if (i % j == 0)
{
p = 0;
break;
}
}

}
if(p==1)
cout << i << endl;


}
cout << endl;

}
//system("PAUSE");
return 0;
}


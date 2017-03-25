#include <cstring>
#include <string>
#include <iostream>
#include <cstdio>

using namespace std;
typedef long long int64;

int t;
int64 A,B,C;

int main(){
scanf("%d",&t);
while(t--){
scanf("%lld%lld%lld",&A,&B,&C);
bool found = false;
for(int i=7; found == false ; ++i){
if((B-A)%(i-6)==0) {
int64 D = (B-A)/(i-6);
int64 T = A+B+D;
if(T*i==2*C) {
int64 F = A-2*D;
printf("%d\n",i);
for(int k=0; k<i; ++k) {
printf("%lld ",F+k*D);
}
printf("\n"); found = true;
}
}
}
}
return 0;
}

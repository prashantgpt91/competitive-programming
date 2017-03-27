# include <stdio.h>
#include<iostream>
#include<vector>
 #include<string.h>
 #include<algorithm>
 
 using namespace std;
 char A[10000000];
int main() {
    char K[10], nk;
    int T, N, t = 0, result = 0;
    scanf("%d",&T);
    while(T--) {
        scanf("%d %s",&N,K);
        nk = strlen(K);
        t = 0; for(int i=1;i<=N;i++) t += sprintf(A+t, "%d", i);
        result = 0; for(int i=0;i<t;i++) result += !strncmp(K,A+i,nk);
        printf("%d\n",result);
    }
}
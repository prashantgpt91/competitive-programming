#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int r,c;
    cin>>r>>c;
    if(r%2==0)
        {
        long long int cr=r/2;
        long long int idx=(cr-1)*(5)+c;
        long long int ans=1+(idx-1)*2;
        cout<<ans<<endl;
    }
    else
        {
        long long int cr=(r+1)/2;
        long long int idx=(cr-1)*(5)+c;
        long long int ans=(idx-1)*2;
        cout<<ans<<endl;
    }
    return 0;
}

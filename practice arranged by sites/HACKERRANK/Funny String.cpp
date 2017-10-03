#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;

string rev(string s)
    {
    int l=s.length();
    string res;
    for(int i=l-1;i>=0;i--)
        {
        res.push_back(s[i]);
    }
        return res;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        {
    string s;
    cin>>s;
    int l=s.length();
    string res=rev(s);
        //cout<<res<<"res";
    int f=0;
    for(int i=1;i<l;i++)
        {
        if(fabs(s[i]-s[i-1])!=fabs(res[i]-res[i-1]))
            {
            cout<<"Not Funny"<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"Funny"<<endl;
    }
    return 0;
}

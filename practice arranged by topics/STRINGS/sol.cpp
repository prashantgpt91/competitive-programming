#include<iostream>
#include<vector>
#include<algorithm>
#include <queue>
#include<iterator>
using namespace std;

void printvec(vector<int>v)
{
    for (std::vector<int>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
        std::cout << *ii << ' ';
}

int main()
{
    int n , q, i, tmp;
    string a, b;
    cin>>n>>q;
    cin>>a>>b;
    vector<int>diff;
    for(i=0;i<n;i++){
        if(a[i] != b[i])
            diff.push_back(i);
    }
    //printvec(diff);
    priority_queue<int, std::vector<int>, std::greater<int> > q1;

    using Iter = std::vector<int>::const_iterator;
    for (Iter it = diff.begin(); it!=diff.end(); ++it)
        q1.push(n);
    
    for(i=0;i<q;i++){
        cin>>tmp;
        tmp--; //1-based index
        b[tmp] = '1';
        if(a[tmp] == b[tmp]){
            for (std::vector<int>::const_iterator ii = diff.begin(); ii != diff.end(); ++ii){
                if(*ii == tmp){
                    diff.erase(ii);
                    if(diff.empty())break;
                }
            }
        }
        else
            diff.push_back(tmp);
        
        if(diff.empty()){
            cout<<"YES"<<endl;
            continue;
        }
        auto minindex = std::min_element(std::begin(diff), std::end(diff));
        if(a[*minindex] == '1')
            cout<<"NO"<<endl;
        else if(b[*minindex] == '1')
            cout<<"YES"<<endl;
    }
    
}

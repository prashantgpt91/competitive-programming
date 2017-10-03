#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

long long a[100005], lt[100005], rt[100005], res, mx ;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    stack<long long> st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        while(st.size() > 0 && a[st.top()] < a[i]) {
            lt[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) {
        lt[st.top()] = -1;
        st.pop();
    }

    for (int i = n - 1; i >= 0; i--) {
        while(st.size() > 0 && a[st.top()] < a[i]) {
            rt[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) {
        rt[st.top()] = -1;
        st.pop();
    }

    for (int i = n - 1; i >= 0; i--) {
        res = (lt[i] + 1) * (rt[i] + 1);
        if (res > mx) mx = res;
    }
    cout << mx << endl;
    return 0;
}

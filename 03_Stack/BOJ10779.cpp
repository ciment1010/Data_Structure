#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int k; cin >> k;
    stack<int> s;
    while(k--){
        int n; cin >> n;
        if(n == 0) s.pop();
        else s.push(n);
    }
    int ans = 0;
    while(!s.empty()){
        ans += s.top();
        s.pop();
    }
    cout << ans;
}
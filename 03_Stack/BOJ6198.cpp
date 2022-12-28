#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int n; cin >> n;
    long long ans = 0;
    stack<int> s;

    while(n--){
        int height; cin >> height;
        while(!s.empty() && height >= s.top()){
            s.pop();
        }
        ans += s.size();
        s.push(height);
    }
    cout << ans;
}
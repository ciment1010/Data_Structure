#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int n; cin >> n;
    long long ans = 0;
    stack<pair<int,int>> s;
    while(n--){
        int cnt = 1, h; cin >> h;
        while(!s.empty() && s.top().first <= h){
            ans += s.top().second;
            if(s.top().first == h) cnt += s.top().second; 
            s.pop();
        }
        if(!s.empty()) ans++;
        s.push({h,cnt});
    }
    cout << ans;
}
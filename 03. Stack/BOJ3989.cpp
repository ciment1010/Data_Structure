#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define Index first
#define Value second

int main(){
    fastio;
    int ans = 0, n; cin >> n;
    while(n--){
        string s; cin >> s;
        stack<char> S;

        for(int i = 0; i < s.size(); i++){
            if(!S.empty() && S.top() == s[i]){
                S.pop();
            }
            else S.push(s[i]);
        }

        if(S.empty()) ans++;
    }
    cout << ans;
}
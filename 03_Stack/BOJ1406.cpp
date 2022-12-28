#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    string s, ans; int m; cin >> s >> m;
    stack<char> S1, S2;
    for(auto i : s) S1.push(i);
    while(m--){
        char c; cin >> c;
        if(c == 'L'){
            if(!S1.empty()){
                S2.push(S1.top()); S1.pop();
            }
        }
        else if(c == 'D'){
            if(!S2.empty()){
                S1.push(S2.top());
                S2.pop();
            }
        }
        else if(c == 'B'){
            if(!S1.empty()) S1.pop();
        }
        else{ char x; cin >> x; S1.push(x); }
    }
    while (S1.size()) ans.push_back(S1.top()), S1.pop();
	reverse(ans.begin(), ans.end());
	while (S2.size()) ans.push_back(S2.top()), S2.pop();
	cout << ans << '\n';
}
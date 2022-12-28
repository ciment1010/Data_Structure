#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    string s; cin >> s;
    stack<char> S;
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' && s[i+1] == ')'){
            ans += S.size(), i++;
        }
        else if(s[i] == '('){
            ans++; S.push('(');
        }
        else if(s[i] == ')') S.pop();
    }
    cout << ans << '\n';
}
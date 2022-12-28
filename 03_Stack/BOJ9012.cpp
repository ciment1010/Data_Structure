#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int T; cin >> T;
    while(T--){
        string t; cin >> t;
        stack<char> s;
        bool flag = 1;
        for(int i = 0; i < t.size(); i++){
            if(t[i] == '(') s.push('(');
            else{
                if(s.empty()) {flag = 0;}
                else s.pop();
            }
        }
        if(s.size()) flag = 0;
        cout << (flag ? "YES" : "NO") << '\n';
    }
}
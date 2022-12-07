#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    stack<int> s;
    int N; cin >> N;
    while(N--){
        string c; cin >> c;
        if(c == "push"){
            int x; cin >> x;
            s.push(x);
        }
        else if(c == "pop"){
            if(s.empty()){ cout << -1 << '\n'; }
            else{ cout << s.top() << '\n'; s.pop(); }
        }
        else if(c == "size") { cout << s.size() << '\n'; }
        else if(c == "empty"){
            cout << (int)s.empty() << '\n';
        }
        else{
            if(s.empty()){ cout << -1 << '\n'; }
            else{ cout << s.top() << '\n'; }
        }
    }
}
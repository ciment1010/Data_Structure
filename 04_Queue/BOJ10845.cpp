#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int N; cin >> N;
    queue<int> Q;
    while(N--){
        string c; cin >> c;
        if(c == "push"){ int x; cin >> x; Q.push(x); }
        else if(c == "pop"){ cout << (Q.empty() ? -1 : Q.front()) << '\n', Q.size() ? Q.pop() : void(); }
        else if(c == "size"){ cout << Q.size() << '\n'; }
        else if(c == "empty"){ cout << Q.empty() << '\n'; }
        else if(c == "front"){ cout << (Q.empty() ? -1 : Q.front()) << '\n'; }
        else{ cout << (Q.empty() ? -1 : Q.back()) << '\n'; }
    }
}
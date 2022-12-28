#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int N; cin >> N;
    deque<int> DQ;
    while(N--){
        string s; cin >> s;
        if ( s == "push_front" ) { int x; cin >> x; DQ.push_front(x); }
        else if ( s == "push_back" ) { int x; cin >> x; DQ.push_back(x); }
        else if ( s == "pop_front" ) {
            cout << (DQ.empty() ? -1 : DQ.front()) << '\n';
            DQ.size() ? DQ.pop_front() : void();
        }
        else if ( s == "pop_back" ) {
            cout << (DQ.empty() ? -1 : DQ.back()) << '\n';
            DQ.size() ? DQ.pop_back() : void();
        }
        else if ( s == "size" ) cout << DQ.size() << '\n';
        else if ( s == "empty" ) cout << DQ.empty() << '\n';
        else if ( s == "front" ) cout << (DQ.empty() ? -1 : DQ.front()) << '\n';
        else if ( s == "back" )  cout << (DQ.empty() ? -1 : DQ.back()) << '\n';
    }
}
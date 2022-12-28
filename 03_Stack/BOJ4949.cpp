#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int N; cin >> N;
    stack<int> s;
    stringstream out;
    for(int i = 0, t = 0; i < N; i++){
        int x; cin >> x;
        while(t < x){
            s.push(++t);
            out << "+\n";
        }
        if(s.empty() || s.top() != x){
            return !(cout << "NO\n");
        }
        s.pop();
        out << "-\n";
    }
    cout << out.str();
}
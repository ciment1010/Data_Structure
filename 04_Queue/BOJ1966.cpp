#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int T; cin >> T;
    while(T--){
        int n, m; cin >> n >> m;
        vector<int> v(n);
        queue<int> Q, check;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            Q.push(v[i]); check.push(i == m);
        }
        sort(v.rbegin(), v.rend());

        for(int i = 0; i < n; i++){
            while(Q.front() != v[i]){
                Q.push(Q.front()); Q.pop();
                check.push(check.front()); check.pop();
            }
            if(check.front()){ cout << i + 1 << '\n'; break; }
            Q.pop(); check.pop();
        }
    }
}
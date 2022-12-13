#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int K, m; cin >> K >> m;
    list<int> l;
    for(int i = 1; i <= K; i++) l.push_back(i);
    while(m--){
        int r, i = 1; cin >> r;
        auto it = l.begin();
        while(it != l.end()){
            if(i % r == 0) it = l.erase(it++);
            else it++;
            i++;
        }
    }
    for(auto it : l) cout << it << '\n';
}
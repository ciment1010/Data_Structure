#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int ans = 0, N, M; cin >> N >> M;
    deque<int> DQ;
    for(int i = 1; i <= N; i++) DQ.push_back(i);
    while(M--){
        int idx = 0, t; cin >> t;
        for(int i = 0; i < DQ.size(); i++){
            if(DQ.front() == t) {idx = i; break;}
            DQ.push_back(DQ.front()), DQ.pop_front();
        }
        ans += min<int>(idx, DQ.size() - idx);
        DQ.pop_front();
    }
    cout << ans << '\n';
}
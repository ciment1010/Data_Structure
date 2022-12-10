#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int N, K, M; cin >> N >> K >> M;
    deque<int> DQ;
    for(int i = 1; i <= N; i++) DQ.push_back(i);
    for(int i = 1, rev = 1; i <= N; i++){
        for(int j = 1; j < K; j++){
            if(rev > 0) DQ.push_back(DQ.front()), DQ.pop_front();
            else DQ.push_front(DQ.back()), DQ.pop_back();
        }
    if(rev > 0) cout << DQ.front() << '\n', DQ.pop_front();
    else cout << DQ.back() << '\n', DQ.pop_back();
    if(i % M == 0) rev *= (-1);  
    }
}
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int N; cin >> N;
    vector<int> v(N+1); deque<int> DQ;
    for(int i = 1; i <= N; i++){
        cin >> v[i], DQ.push_back(i);
    }
    for(int _ = 0; _ < N; _++){
        int idx = DQ.front(); cout << idx << ' ';
        if(v[idx] < 0){
            DQ.pop_front();
            for(int _ = 0; _ < -v[idx]; _++)
                DQ.push_front(DQ.back()), DQ.pop_back();
        }
        else{
            DQ.pop_front();
            for(int _ = 1; _ < v[idx]; _++)
                DQ.push_back(DQ.front()), DQ.pop_front();
        }
    }
    cout << '\n';
}
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int n, k; cin >> n >> k;
    vector<int> v;
    queue<int> Q; for(int i = 1; i <= n; i++) Q.push(i);
    while(n--){
        for(int i = 0; i < k - 1; i++){
            Q.push(Q.front()); Q.pop();
        }
        v.push_back(Q.front()); Q.pop();
    }
    cout << '<';
    for(int i = 0; i < v.size() - 1; i++) cout << v[i] << ", ";
    cout << v.back() << '>' << '\n';
}
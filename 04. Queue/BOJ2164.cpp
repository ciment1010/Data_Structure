#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int N; cin >> N;
    queue<int> Q; for(int i = 1; i <= N; i++) Q.push(i);
    while(Q.size() != 1){
        Q.pop(); Q.push(Q.front()); Q.pop();
    }
    cout << Q.front() << '\n';
}
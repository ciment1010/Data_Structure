#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, k; cin >> n >> k;
    list<int> L;
    for(int i = 1; i <= n; i++) L.push_back(i);
    
    vector<int> v;
    auto it = L.begin();
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < k; j++){
            if(++it == L.end()) it = L.begin();
        }
        v.push_back(*it);
        if((it = L.erase(it)) == L.end()) it = L.begin();
    }
    
    cout << '<';
    for(int i = 0; i < n; i++){
        cout << v[i];
        if(i != n - 1) cout << ", "; 
    } 
    cout << '>' << '\n';
}
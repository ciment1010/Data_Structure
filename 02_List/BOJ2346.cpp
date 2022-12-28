#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;

	int N; cin >> N;
    list<pair<int, int>> L;
    for(int i = 1; i <= N; i++){
        int v; cin >> v;
        L.push_back({i, v});
    }

    auto it = L.begin();
    vector<int> v;
    while(N--){
        int cnt = it->second; v.push_back(it->first);
        if((it = L.erase(it)) == L.end()) it = L.begin();
        if(cnt > 0){
            for(int i = 1; i < cnt; i++){
                if(++it == L.end()) it = L.begin();
            }
        }
        else{
            for(int i = 0; i < -cnt; i++){
                if (it == L.begin()) it = prev(L.end());
				else it--;
            }
        }
    }
    for(const auto i : v) cout << i << ' '; cout << '\n';
}
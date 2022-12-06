#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int N; cin >> N;
    while(N--){
        string s; cin >> s;
        list<char> L;
        auto it = L.end();
        for(auto i : s){
            if(i == '-') { if(it != L.begin()) L.erase(prev(it)); }
            else if (i == '<') { if(it != L.begin()) it--; }
            else if (i == '>') { if(it != L.end()) it++; }
            else { L.insert(it, i); }
        }
        cout << string(L.begin(), L.end()) << '\n';
    }   
}
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define Index first
#define Value second

int main(){
    fastio;
    int n, l; cin >> n >> l;
    deque<pair<int,int>> d;
    for(int i = 0; i < n; i++){
        int a; cin >> a;

        while(!d.empty() && d.back().Value >= a){
            d.pop_back();
        }

        d.push_back({i,a});

        if(d.front().Index <= i - l){
            d.pop_front();
        }

        cout << d.front().Value << ' ';
    }
}
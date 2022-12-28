#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    vector<int> scale(8);
    for(auto& i : scale) cin >> i;
    vector<int> asc = { 1, 2, 3, 4, 5, 6, 7, 8 };
    vector<int> dsc = { asc.rbegin(), asc.rend() };
    if (scale == asc) cout << "ascending\n";
    else if (scale == dsc) cout << "descending\n";
    else cout << "mixed\n";
}
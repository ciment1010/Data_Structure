#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
	fastio;
	int N; cin >> N;
    while(N--){
        string s1, s2; cin >> s1 >> s2;
        int alpha[26] = { };
        for(auto i : s1) { alpha[i - 'a']++; }
        for(auto i : s2) { alpha[i - 'a']--; }
        bool flag = true;
        for(auto i : alpha) { if(i) { flag = false; } }
        cout << (flag ? "Possible" : "Impossible") << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
	fastio;
	string s1, s2; cin >> s1 >> s2;
    int alpha1[26] = { }, alpha2[26] = { };
	for(auto i : s1) { alpha1[i - 'a']++; }
    for(auto i : s2) { alpha2[i - 'a']++; }
    int ans = 0;
    for(int i = 0; i < 26; i++) { ans += abs(alpha1[i] - alpha2[i]); }
    cout << ans;
    return 0;
}
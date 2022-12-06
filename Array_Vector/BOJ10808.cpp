#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
	fastio;
	int arr[26] = { 0 };
	string s; cin >> s; cin.ignore();
	for(auto i : s) { arr[i-'a']++; }
	for(auto i : arr) { cout << i << ' '; }
    return 0;
}
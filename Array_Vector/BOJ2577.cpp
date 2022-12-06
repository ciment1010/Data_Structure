#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
	fastio;
	int a, b, c; cin >> a >> b >> c;
	string s = to_string(a * b* c);
	int arr [10] = { };
	for(auto i : s) { arr[i - '0']++; }
	for(auto i : arr) { cout << i << '\n';}
	/* ***** Another Way *****
	int a, b, c; cin >> a >> b >> c;
	int arr[10] = { };
	for(int i = a * b * c; i > 0; i /= 10) { arr[i%10]++; }
	for(auto i : arr) { cout << i << '\n';}
	return 0;
    */
}
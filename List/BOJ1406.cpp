#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	string s; int n; cin >> s >> n;
	list<char> L(s.begin(), s.end());

	for (auto it = L.end(); n--;) {
		char cmd, x; cin >> cmd;
		if (cmd == 'L') { if (it != L.begin()) it--; }
		else if (cmd == 'D') { if (it != L.end()) it++; }
		else if (cmd == 'B') { if (it != L.begin()) it = L.erase(prev(it)); }
		else { cin >> x; L.insert(it, x); }
	}

	cout << string(L.begin(), L.end()) << '\n';
}
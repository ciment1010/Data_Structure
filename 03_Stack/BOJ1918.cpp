#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int conv[128]; //operator precedence

void Init() {
	conv['('] = conv[')'] = 1;
	conv['+'] = conv['-'] = 2;
	conv['*'] = conv['/'] = 3;
}

int main() {
	fastio;
	Init();
	string s; cin >> s; s = '(' + s + ')';
	string ans, S; //stack
	for (const auto& i : s) {
		if (isalpha(i)) ans.push_back(i);
		else if (i == '(') S.push_back(i);
		else if (i == ')') {
			while (S.size() && S.back() != '(')
				ans.push_back(S.back()), S.pop_back();
			S.pop_back();
		}
		else {
			while(S.size() && conv[i] <= conv[S.back()])
				ans.push_back(S.back()), S.pop_back();
			S.push_back(i);
		}
	}
	cout << ans << '\n';
}
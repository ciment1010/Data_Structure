#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
	fastio;
	int N; cin >> N;
	int arr[201] = {0};
	for(int i = 0, t; i < N; i++)
	{
		cin >> t;
		arr[t+100]++;
	}
	int v; cin >> v;
	cout << arr[v+100];
	return 0;
}
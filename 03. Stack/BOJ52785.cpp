#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int n; cin >> n;
    int arr[n], ans[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    stack<int> s;
    for(int i = n - 1; i >= 0; i--){
        while(!s.empty() && s.top() <= arr[i]){
            s.pop();
        }
        if(s.empty()) ans[i] = -1;
        else ans[i] = s.top();

        s.push(arr[i]);
    }

    for(auto i : ans) cout << i << ' ';
}
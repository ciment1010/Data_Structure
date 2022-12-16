#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int arr[100001];
bool occur[2000001];
int n, x;

int main(){
    fastio;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> x;

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(x - arr[i] > 0 && occur[x-arr[i]]) ans++;
        occur[arr[i]] = true;
    }
    cout << ans;
}
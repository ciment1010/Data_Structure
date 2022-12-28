#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int ans = 1, n; cin >> n;
    int arr[10] = { };
    while(n){
        arr[n % 10]++;
        n /= 10;
    }

    for(int i = 0; i < 10; i++){
        if(i == 6 || i == 9) continue;
        ans = max(ans, arr[i]);
    }
    ans = max(ans, (arr[6] + arr[9] + 1)/2);
    cout << ans;
}
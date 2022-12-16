#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int n, k; cin >> n >> k;

    int student[6][2] = {};
    for(int i = 0; i < n; i++){
        int s, g; cin >> s >> g;
        student[g-1][s]++;
    }

    int ans = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 2; j++){
            ans += student[i][j] / k;
            if(student[i][j] % k) ans++;
        }
    }
    cout << ans;
}
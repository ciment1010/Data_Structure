#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    bool arr[30] = {0};
    for(int i = 0; i < 28; i++){
        int n; cin >> n;
        arr[n-1] = 1;
    }
    for(int i = 0; i < 30; i++){
        if(arr[i] == 0) cout << i + 1 << '\n';
    }
}
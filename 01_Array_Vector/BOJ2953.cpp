#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int n, max = 0, idx = 0;
    for(int i = 0; i < 5; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            cin >> n;
            sum += n;
        }
        if (sum >= max) {max = sum; idx = i;}
    }
    cout << idx+1 << " " << max;
}
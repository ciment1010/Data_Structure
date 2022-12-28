#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    while(1){
        int n; cin >> n; if(!n) return 0;
        long long area = 0; stack<pair<int,int>> s;
        for(int i = 0; i < n; i++){
            int idx = i, h; cin >> h;
            
            while(!s.empty() && s.top().first >= h){
                area = max(area, 1LL * s.top().first * (i - s.top().second));
                idx = s.top().second;
                s.pop();
            }
            s.push({h,idx});
        }
        while(!s.empty()){
            area = max(area, 1LL * (n - s.top().second) * s.top().first);
            s.pop();
        }
        cout << area << '\n';
    }
}
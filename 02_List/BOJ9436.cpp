#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int N, T;
    while(cin >> N){
        if(N == 0) break;
        cin >> T;
        list<int> L(N, 0);
        
        int flag = 1; auto it = L.begin();
        while(flag){
            for(int i = 0; i < T; i++){
                if(it == L.end()) it = L.begin();
                (*it)++; it++;
            }
            it = L.erase(prev(it));

            for(auto i : L){
                if(i != L.front()){ flag = 1; break; }
                else flag = 0;
            }
        }
        cout << L.size() << " " << L.front() << '\n';
    }
}
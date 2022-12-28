#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

deque<int> parsing(string x)
{
    deque<int> ret;
    for (int i = 1; i < x.size() - 1; i++){
        int num = 0;
        while (isdigit(x[i])){
            num = num * 10 + (x[i] - '0');
            i++;
        }
        ret.push_back(num);
    }
    return ret;
}

int main(){
    fastio;
    int T; cin >> T;
    while (T--){
        string p, x; int n;
        cin >> p >> n >> x;
        deque<int> DQ = parsing(x);

        bool rev = 0, is_empty = 0;
        for (auto i : p){
            if (i == 'R') rev ^= 1;
            else if (i == 'D'){
                if (DQ.empty()) { is_empty = 1; break; }
                if (!rev) DQ.pop_front();
                else DQ.pop_back();
            }
        }

        if (is_empty) cout << "error" << '\n';
        else{
            if (rev) reverse(DQ.begin(), DQ.end());
            
            cout << "[";
            for(int i = 0; i < DQ.size(); i++){
                cout << DQ[i];
                if(i != DQ.size() - 1) cout << ',';
            }
            cout << "]\n";
        }
    }
}
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    string s; stack<int> S;
    while(getline(cin, s)){
        if(s == "문제") S.push(1);
        else if(s == "고무오리"){
            S.empty() ? S.push(1), S.push(1) : S.pop();
        }
        else if(s == "고무오리 디버깅 끝") break;
    }
    cout << (S.empty() ? "고무오리야 사랑해" : "힝구") << '\n';
}
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define Index first
#define Value second

int main(){
    fastio;
    int sum = 0, mul = 1;
    string str; cin >> str;
    stack<char> s;

    for(int i = 0; i < str.size(); i++){
        if (str[i] == '('){
            mul *= 2;
            s.push(str[i]);
        }
        else if (str[i] == '['){
            mul *= 3;
            s.push(str[i]);
        }
        else if(str[i] == ')'){
            if(s.empty() || s.top() != '('){
                cout << 0; return 0;
            }
            if(str[i-1] == '(') sum += mul;
            s.pop(); mul /= 2;
        }
        else{
            if(s.empty() || s.top() != '['){
                cout << 0; return 0;
            }
            if(str[i-1] == '[') sum += mul;
            s.pop(); mul /= 3;
        }
    }
    if(s.empty()) cout << sum;
    else cout << 0;  
}
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    string s; stack<int> S;
    while(getline(cin, s)){
        if(s == "����") S.push(1);
        else if(s == "������"){
            S.empty() ? S.push(1), S.push(1) : S.pop();
        }
        else if(s == "������ ����� ��") break;
    }
    cout << (S.empty() ? "�������� �����" : "����") << '\n';
}
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x){
    dat[pos++] = x;
}

int pop(){
    return dat[--pos];
}

int top(){
    if (pos == 0) return -1;
    else return dat[pos-1];
}

int main(){
    fastio;
    int N; cin >> N;
    while(N--){
        string s; cin >> s;
        if(s == "push"){
            int x; cin >> x;
            push(x);
        }
        else if(s == "pop"){
            if(pos == 0){ cout << -1 << '\n'; }
            else{ cout << pop() << '\n'; }
        }
        else if(s == "size") { cout << pos << '\n'; }
        else if(s == "empty"){
            if(pos == 0) { cout << 1 << '\n'; }
            else{ cout << 0 << '\n'; }
        }
        else{
            if(pos == 0){ cout << -1 << '\n'; }
            else{ cout << top() << '\n'; }
        }
    }
}
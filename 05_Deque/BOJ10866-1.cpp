#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

void push_front(int x){
    dat[--head] = x;
}

void push_back(int x){
    dat[tail++] = x;
}

void pop_front(){
    head++;
}

void pop_back(){
    tail--;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail - 1];
}

int main(){
    fastio;
    int N; cin >> N;
    while(N--){
        string s; cin >> s;
        if ( s == "push_front" ) { int x; cin >> x; push_front(x); }
        else if ( s == "push_back" ) { int x; cin >> x; push_back(x); }
        else if ( s == "pop_front" ) {
            if(tail > head){ cout << dat[head] << '\n'; pop_front();}
            else cout << -1 << '\n';
        }
        else if ( s == "pop_back" ) {
            if(tail > head){ cout << dat[tail - 1] << '\n'; pop_back();}
            else cout << -1 << '\n';
        }
        else if ( s == "size" ) cout << tail - head << '\n';
        else if ( s == "empty" ) cout << (tail - head ? 0 : 1) << '\n';
        else if ( s == "front" ) cout << (tail - head ? dat[head] : -1) << '\n';
        else if ( s == "back" )  cout << (tail - head ? dat[tail - 1] : -1) << '\n';
    }
}
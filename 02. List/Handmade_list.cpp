#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void traverse(){
    int cur = nxt[0];
    while(cur != -1){
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << '\n\n';
}

void insert(int addr, int num) {
    // 1. Write new element
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];

    // 2. Fix pre & nxt element's information
    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    
    // 3. Fix unused
    unused++;
}

void erase(int addr){
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
    unused--;
}

int main (){
    fastio;
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
}


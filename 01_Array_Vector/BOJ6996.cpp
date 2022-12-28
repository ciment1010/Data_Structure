#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int n; cin >> n;
    while(n--){
        string s1, s2, s3, s4; cin >> s1 >> s2;
        s3 = s1, s4 = s2;
        sort(s3.begin(), s3.end());
        sort(s4.begin(), s4.end());
        if( s3 == s4 )
            cout << s1 << " & " << s2 << " are anagrams.\n";
        else
            cout << s1 << " & " << s2 << " are NOT anagrams.\n";
    }
}
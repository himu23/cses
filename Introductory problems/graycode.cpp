#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string binstr(int n){
    string ans="";
    while(n>0){
        if(n%2!=0) ans+='1';
        else ans+='0';
        n/=2;
    }
    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    int n; cin>>n;
    
    return 0;
}
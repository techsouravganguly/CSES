#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 1;
    long long base = 2;
    long long mod = 1e9 + 7;
    while(n >  0){
        if(n%2!=0){
            ans = (ans * base)% mod;
        }
        base = ((base % mod) * (base % mod))%mod;
        n = n  / 2;
    }
    cout << ans % mod;
}
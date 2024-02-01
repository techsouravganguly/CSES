
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long a = 0;
    for(int i = 1; i <= n; i++){
        a ^= i;
    }
    long long tmp;
    for(int i = 0 ; i < n - 1; i++){
        cin >> tmp;
        a ^= tmp;
    }
    cout << a<<endl;
    return 0;
}
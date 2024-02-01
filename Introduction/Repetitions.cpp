#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int i = 0,  j= 0;
    int ans = 1;
    int size = s.size();
    while(i < size && j < size){
        if(s[i] != s[j]){
            ans = max(ans, j - i);
            i = j;
            j++;
        }
        else {
            j++;
        }
    }
    ans = max(ans, j - i);
    cout  << ans;
    return 0;
}
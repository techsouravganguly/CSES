#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans = 0;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
        if(i > 0){
            if(arr[i] < arr[i - 1]){
                ans += arr[i - 1] - arr[i];
                arr[i] = arr[i - 1];
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}
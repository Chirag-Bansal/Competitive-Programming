#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> b(n);
        vector<int> c(n);
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) cin >> c[i];
        for(int i = 0; i < n; i++){
            v[i] = ceil(log2(b[i]));
        }
        vector<vector<int>> dp(n, vector<int>(k+1,0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= k; j++){
                if(i == 0 ){
                    if(j < v[i]) dp[i][j] = 0;
                    else dp[i][j] = c[i];
                }
                else if(j < v[i]){
                    dp[i][j] = dp[i-1][j];
                }
                else {
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-v[i]] + c[i]);
                }
            }
        }
        cout << dp[n-1][k] << endl;
    }
    return 0;
}
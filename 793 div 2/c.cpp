#include <bits/stdc++.h>
using namespace std;

#define loop(x,n) for(int x = 0; x < n; x++)
#define M 1000000007

int main(){
	ios_base::sync_with_stdio(false);  
	cin.tie(NULL);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		std::vector<int> v(n);
		loop(i,n) cin >> v[i];
		int i = 0;
		while(v[i] == i){
			i++;
		}
		int ans = i;
		while(++i < n){
			ans = ans & i;
		}
		cout << ans << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define loop(x,n) for(int x = 0; x < n; x++)
#define M 1000000007

int main(){
	ios_base::sync_with_stdio(false);  
	cin.tie(NULL);
	int t,n; string s;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		int ans = 0;
		if(s.size()%2 == 0){
			ans += 2;
			char mid = s[s.size()/2-1];
			int i = s.size()/2-2;
			while(i >= 0 && s[i--] == mid) ans+=2;
		}else{
			ans +=1;
			char mid = s[s.size()/2];
			int i = ((int)s.size()/2)-1;
			while(i >= 0 && s[i] == mid) {
				ans+=2;
				i--;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
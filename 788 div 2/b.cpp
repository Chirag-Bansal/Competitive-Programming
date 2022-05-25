#include <bits/stdc++.h>
using namespace std;

#define loop(x,n) for(int x = 0; x < n; x++)

int main(){
	ios_base::sync_with_stdio(false);  
	cin.tie(NULL);
	int t,n,k;
	string s;
	cin >> t;
	while(t--){
		cin >> n >> s >> k;
		std::vector<char> v(k);
		std::vector<int> m(26);
		loop(i,k){
			cin >> v[i];
			m[v[i]-'a'] = 1;
		}
		int curr = 0, i = 0, max_rem = 0;
		while(i < n){
			while(i < n && m[s[i]-'a'] == 0){
				curr++;
				i++;
			}
			if(i == n) break;
			max_rem = max(max_rem, curr);
			curr = 1; i+=1;
		}
		cout << max_rem << endl;
	}
	return 0;
}
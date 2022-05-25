#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n,m,temp;
	cin >> t;
	while(t--){
		cin >>n;
		std::vector<int> a(n,0);
		for(int x = 0; x < n; x++) cin >> a[x];
		cin >> m;
		int total_shuffle = 0;
		for(int x = 0; x < m; x++){
			cin >> temp;
			total_shuffle += temp;
			total_shuffle %= n;
		}
		cout << a[total_shuffle%n] << endl;
	}
	return 0;
}
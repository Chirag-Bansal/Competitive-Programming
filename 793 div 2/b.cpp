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
		unordered_map<int,int> map;
		loop(i,n) {
			cin >> v[i];
			map[v[i]]++;
		}
		int a = 0, b = 0;
		for(auto itr = map.begin(); itr != map.end(); itr++){
			if(itr->second >= 1) a++;
			if(itr->second >=2) b++;
		}
		cout << b + (a-b)/2 << endl;
	}
	return 0;
}
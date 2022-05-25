#include <bits/stdc++.h>
using namespace std;

#define loop(x,n) for(int x = 0; x < n; x++)
#define M 1000000007

bool sorted(vector<int> &a, vector<int> &b, int n){
	for(int i = 0; i < n-1; i++){
		if(a[i] > a[i+1] || b[i] > b[i+1]) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);  
	cin.tie(NULL);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		std::vector<int> a(n),b(n);
		loop(i,n) cin >> a[i];
		loop(i,n) cin >> b[i];
		int moves = 0;
		vector<pair<int,int>> v;
		for(int i = 0; i < n-1; i++){
			for(int j = 0; j < n-1;j++){
				if(a[j] == a[j+1] && b[j] == b[j+1]) continue;
				else if(a[j] >= a[j+1] && b[j] >= b[j+1]){
					moves++;
					swap(a[j],a[j+1]);
					swap(b[j],b[j+1]);
					v.push_back(make_pair(j+1,j+2));
				}
			}
		}
		if(!sorted(a,b,n)) cout << -1 << endl;
		else{
			cout << moves << endl;
			for(int i = 0; i < moves; i++){
				cout << v[i].first << " " << v[i].second << endl;
			}
		}
	}
	return 0;
}
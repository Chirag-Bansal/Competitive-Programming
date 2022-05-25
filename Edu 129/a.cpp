#include <bits/stdc++.h>
using namespace std;

#define loop(x,n) for(int x = 0; x < n; x++)
#define M 1000000007

int main(){
	ios_base::sync_with_stdio(false);  
	cin.tie(NULL);
	int t,n,m;
	cin >> t;
	while(t--){
		cin >>n;
		std::vector<int> a(n);
		int a_max = -1;
		loop(i,n) {
			cin >> a[i];
			a_max = max(a_max,a[i]);
		}
		cin >> m;
		std::vector<int> b(m);
		int b_max = -1;
		loop(i,m) {
			cin >> b[i];
			b_max = max(b_max,b[i]);
		}
		if(a_max == b_max){
			cout << "Alice\nBob\n";
		}else if(a_max > b_max){
			cout << "Alice\nAlice\n";
		}else{
			cout << "Bob\nBob\n";
		}
	}
	return 0;
}
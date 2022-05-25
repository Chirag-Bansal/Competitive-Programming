#include <bits/stdc++.h>
using namespace std;

#define loop(x,n) for(int x = 0; x < n; x++)
#define M 1000000007
#define ll long long int
#define vi vector<int>
#define vvi vector<vector<int>>

int get_num_digits(ll x){
	int ans = 0;
	while(x){
		x/= 10;
		ans++;
	}
	return ans;
}

vi get_digits(ll x){
	vi res;
	while(x){
		res.push_back(x%10);
		x /= 10;
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);  
	cin.tie(NULL);
	int n;
	ll x;
	cin >> n >> x;
	queue<ll> q; q.push(x);
	map<ll,int> m;
	m[x] = 0;
	while(!q.empty()){
		ll temp = q.front(); q.pop();
		if(get_num_digits(temp) == n) {
			cout << m[temp] << endl;
			return 0;
		}
		vi digits = get_digits(temp);
		for(int c: digits){
			if(c == 0) continue;
			ll w = c * temp;
			if(!m.count(w)){
				m[w] = m[temp] + 1;
				q.push(w);
			}
		}
	}
	cout << -1 << endl;
}
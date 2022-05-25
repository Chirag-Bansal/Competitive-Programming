#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main() {
  int t,n;
  cin >> t;
  while(t--){
    cin >> n;
    std::vector<int> v(n);
    int neg = 0, pos = 0;
    for(int i = 0; i < n; i++){
      cin >> v[i];
      if(v[i] < 0) neg++;
      else pos ++;
    }
    int i = 0;
    bool done = false;
    while(neg){
      v[i] = -1 * abs(v[i]);
      i++;
      neg--;
    }
    while(pos){
      v[i] = abs(v[i]);
      i++;
      pos--;
    }
    for(int i = 0; i < n-1; i++){
      if(v[i] > v[i+1]){
        cout << "NO" << endl;
        done = true;
        break;
      }
    }
    if(!done){
      cout << "YES" << endl;
    }
  }
  return 0;
}
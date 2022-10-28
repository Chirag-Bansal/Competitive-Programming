#include <bits/stdc++.h>
using namespace std;

void FillPossibilities(vector<string>& poss, int sum, string& s){
    if(sum < 0) return;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '?'){
            for(int j = 0; j <= 8; j++){
                s[i] = '0' + j;
                FillPossibilities(poss,sum-j,s);
            }
            s[i] = '?';
            return;
        }
    }
    if(sum == 0) poss.push_back(s);
}

int main()
{
    int t, sum;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        cin >> sum;
        for(char ch: s){
            if(ch != '?'){
                sum -= (ch -'0');
            }
        }
        vector<string> possibilities;
        FillPossibilities(possibilities,sum,s);
        for(string x: possibilities) cout << x << " ";
        cout << endl;
    }
    return 0;
}

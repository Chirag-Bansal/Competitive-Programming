#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;

int dfs(vector<vector<vector<int>>>& company_wise_graph,vector<bool>& visited, int company, int node, int n){
    if(visited[node]) return 1;
    visited[node] = true;
    int ans = node;
    for(int i = 0; i < n; i++){
        if(company_wise_graph[company][node][i] == 1 && !visited[i]){
            ans *= dfs(company_wise_graph,visited,company,i,n);
        }
    }
    return ans;
}

int max_product(vector<vector<vector<int>>>& company_wise_graph, int company, int n){
    vector<bool> visited(n, false);
    int max_val = INT_MIN;
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            max_val = max(max_val,dfs(company_wise_graph,visited,company,i,n));
        }
    }
    return max_val;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n],b[n],c[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i] >> b[i] >> c[i];
        }
        vector<vector<vector<int>>> company_wise_graph(101,vector<vector<int>>(n+1,vector<int>(n+1,0)));
        for(int i = 0; i < n; i++){
            company_wise_graph[c[i]][a[i]][b[i]] = 1;
            company_wise_graph[c[i]][b[i]][a[i]] = 1;
        }
        int max_val = INT_MIN;
        for(int i = 1; i < 101; i++){
            max_val = max(max_val,max_product(company_wise_graph,i,n));
        }
        cout << max_val << endl;
    }
    return 0;
}

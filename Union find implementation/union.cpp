#include <iostream>

using namespace std;


int parent[10000];
int Rank[10000];

void makeSet(int n){
	for(int i = 0; i <= n; i++){
		Rank[i] = 0;
		parent[i] = i;
	}
}

int findParent(int elem){
	if(elem == parent[elem]) return elem;
	else return parent[elem] = findParent(parent[elem]); // Path compression
}

void Union(int x, int y){
	int par_x = findParent(x), par_y = findParent(y);
	if(par_x == par_y) return;
	else if(Rank[par_x] < Rank[par_y]){
		parent[par_x] = par_y;
	}else if(Rank[par_y] < Rank[par_x]){
		parent[par_y] = par_x;
	}else{
		parent[par_x] = par_y;
		Rank[par_y]++;
	}
}

int main(){

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int solve(string n, string m){
	for(int i=0; i < n.length(); i++){
		if(n[i] > m[i]) return 1;
		else if(n[i] < m[i]) return -1;
	}
	return 0;
}
int main(){
	int ans = 0;
	string n,m;
	cin >> n >> m;
	for(int i=0; i<n.length(); i++){
	       	n[i] = tolower(n[i]);
		m[i] = tolower(m[i]);
	}
	cout << solve(n,m) << endl;
}

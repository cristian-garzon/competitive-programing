#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m, ans = 0;
	cin >> n >> m;
	int f[m];
	for(int i = 0; i < m; i++) cin >> f[i];
	sort(f,f+m);
	ans = f[n-1] - f[0];
	for(int i = 0; i <=m - n; i++){
		if(f[i+(n-1)] - f[i] < ans) ans = f[i+(n-1)] - f[i];
	}
	cout << ans << endl;
}

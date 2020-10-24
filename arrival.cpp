#include<bits/stdc++.h>
using namespace std;
int main(){
	int ans, n,m = 0, p = 101,au1,au2;
	cin >> n;
	int v[n];
	for(int i = 0; i < n; i++) cin >> v[i];
	for(int i = 0; i < n; i++){
		if(v[i] <= p){
			au1 = i+1;
			p = v[i];
		}
		if(v[i] > m){
			au2 = i;
			m = v[i];
		}
	}
	p = au1;
	au1 = n - au1;
	ans = au1 + au2;
	if(p < au2 || p == au2) ans--;
	cout << ans << endl;
}

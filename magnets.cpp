#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,p = 0,ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		if(m != p) ans++;
		p = m;
	}
	cout << ans << endl;
}

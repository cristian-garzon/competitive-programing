#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,l,m,n,d,ans = 0;
	cin >> k >> l >> m >> n >> d;
	int v[d+1];
	v[0] = 0;
	for (int i = 1; i < d+1; i++) v[i] = i+1;
	for(int i = 0; i < d+1; i += k) v[i] = 0; 
	for (int i = 0; i < d+1; i += l) v[i] = 0;
	for(int i = 0; i < d + 1; i += m) v[i] = 0;
	for (int i = 0; i < d + 1; i += n) v[i] = 0;
	for (int i = 0; i < d+1; i++){
		if(v[i] != 0) ans++;
	}
	cout << d-ans << endl;
}

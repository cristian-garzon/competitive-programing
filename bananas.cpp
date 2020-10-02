#include<bits/stdc++.h>
using namespace std;
int main(){
	int p = 0,k,n,w;
	cin >> k >> n >> w;
	for(int i=1; i<=w; i++){
		p = p + k*i;
	}	
	if((p-n) >= 0) cout << p-n << endl;
	else cout << 0 << endl;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,p = 0 ,max = 0,ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		if(p <= a) ans++;
		else {
			if(ans > max) max = ans;
			ans = 1;
		}
		p = a;
	}
	if(ans > max) max = ans;
	cout << max << endl;
}

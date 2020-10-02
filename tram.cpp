#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,ans = 0,b,max = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		ans = ans + b - a;
		if(ans > max) max = ans;
	}
	cout << max << endl;
}

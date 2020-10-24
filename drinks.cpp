#include<bits/stdc++.h>
using namespace std;
int main(){
	long double ans = 0,n,p;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> p;
		ans += (p/100);
	}
	cout << fixed << setprecision(12) << (ans/n)*100 << endl;
}

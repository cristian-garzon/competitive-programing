#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n, ans = 0;
	cin >> n;
	if(n%2 == 0) cout << n/2 << endl;
	else cout << -((n+1)/2) << endl;
}

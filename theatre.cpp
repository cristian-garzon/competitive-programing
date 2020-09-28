#include<bits/stdc++.h>
using namespace std;
long max(int n, int a){
	int i=1;
	int a2 = a;
	while (n > a){
		a = a + a2;
		i++;
	}
	return i; 
}
int main(){
	int m,n,a;
	cin >> n >> m >> a;
	long long ans = max(n,a)*max(m, a);
	cout << ans << endl;
}


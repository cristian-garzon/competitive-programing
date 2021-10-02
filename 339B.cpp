#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, c=0, s=0;
	cin >> n >> m;
	int a[m];
	for(int i=0; i < m; i++) cin >> a[i];
	for(int i = 0; s != m ; i++){
		cout << a[1] << i+1 << endl;
		if(a[i] == i+1){
			s++;
			a[i]=0;
		}
		if(i == n-1) i=0;
		c++;
	}
	cout << c << endl;
}

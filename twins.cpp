#include<bits/stdc++.h>
using namespace std;
bool v(int a, int an){
	if(a > an)return true;
	return false;
}
int main(){
	int n, a[100], b = 0, c = 0, d = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b = b + a[i];
	}
	sort(a, a+n, v);
	for(int i = 0; i < n; i++){
		c = c + a[i];
		b = b - a[i];
		d++;
		if(c > b)break;
	}
	cout << d << endl;
}

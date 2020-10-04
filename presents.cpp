#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,v,ans[100];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> v;
		ans[v - 1] = i + 1;
	}
	for(int i = 0; i < n; i++) cout << ans[i] << " ";
	cout << endl;
}

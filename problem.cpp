#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m, ans=0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		ans += m;
	}
	if(ans != 0) cout << "HARD" << endl;
	else cout << "EASY" << endl;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p[100][100], ans;
	bool v=true;
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			cin >> p[i][j];
		}
	}
	for(int j=0; j<3; j++){
		ans = 0;
		for(int i=0;i<n;i++){
			ans = ans + p[i][j];
		}
		if(ans != 0) v=false;
	}	
	if(v) cout << "YES" << endl;
	else cout << "NO" << endl;
}

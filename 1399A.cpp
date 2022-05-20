#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n, p, au;
	bool r = true;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> n;
		vector<int> a;
		for(int j = 0; j < n; j++){
			cin >> p;
			a.push_back(p);
		}
		sort(a.begin(), a.end(), greater<int>());
		for(int j = 0; j < a.size() - 1; j++){
			if(j == 0) au = a[j];
			au = au - a[j+1];
			if(au > 1) {
				r = false;
				break;
			}
			au = a[j + 1];
		}
		if(r) cout << "YES" << endl;
		else cout << "NO" << endl;
		r = true;
	}
}

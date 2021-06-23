#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<pair <int,int>> v;
	int s,n,m=0, size;
	cin >> s >> n;
	int x[n], y[n];
	for(int i = 0; i < n; i++){
		cin >> x[i] >> y[i];
	}
	size = sizeof(x)/sizeof(x[0]);
	for(int i=0; i<n; i++) v.push_back( make_pair(x[i], y[i]));
	sort(v.rbegin(), v.rend());
	for(int i = n; i > 0 ; i++){
		if(s >= v[i].first) s += v[i].second;
		else {
			s - v[i].first;
			break;
		}
	}
	if (s > 0 ) cout << "YES" << endl;
	else cout << "NO" << endl;
}

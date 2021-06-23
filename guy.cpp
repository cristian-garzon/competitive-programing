nclude<bits/stdc++.h>
using namespace std;
int main(){
	int n, a=0,b,c;
	cin >> n;
	cin >> b;
	vector<int> x(b);
	for(int i = 0; i < b; i++) cin >> x[i];
	cin >> c;
	vector<int> y(c);
	for(int i = 0; i < c; i++) cin >> y[i];
	x.insert(x.end(),y.begin(), y.end());
	for(int i = 0; i < n; i++){
		auto aux = find(x.begin(), x.end(), i+1);
		if(!(aux != x.end())) a=-1;
	}
	a == 0 ? cout << "I become the guy." << endl : cout << "Oh, my keyboard!" << endl;											    
}

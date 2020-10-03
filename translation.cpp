#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	bool v = true;
	cin >> s;
	cin >> t;
	int p = s.length()-1;
	for(int i = 0; i < s.length(); i++){
		if(s[i] != t[p]) v = false;
		p--;
	}
	if(v) cout << "YES" << endl;
	else cout << "NO" << endl;
}

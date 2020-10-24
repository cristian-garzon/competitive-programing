#include<bits/stdc++.h>
using namespace std;
int main(){
	string s, ans = "", p;
	int r=0;
	bool v = true;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
		       	i += 2;
			r++;
			if(ans != "" && r<2) ans += " ";
		} else {
			p = s[i];	
			r=0;
			ans += p;
		}
	}
	cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s, p="hello";
	int ans = 0, i=0;
	cin >> s;
	for(int j=0; j<s.length(); j++){
		if(p[i] == s[j]){
			ans++;
			i++;
		}
	}
	if (ans < 5) cout << "NO" << endl;
	else cout << "YES" << endl;
}

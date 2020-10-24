#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	bool v = false;
	string s,a="abcdefghijklmnopqrstuvwxyz";
	cin >> n >> s;
	if(n > 25){
		for(int i = 0; i < a.length(); i++){
			v = false;
			for(int j = 0; j < s.length(); j++){
				if(a[i] == tolower(s[j])) v = true;
			}
			if(!v)break;
		}
	}
	if(v) cout << "YES" << endl;
	else cout << "NO" << endl;
}

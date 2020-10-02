#include<bits/stdc++.h>
using namespace std;
int main(){
	int p=0;
	string s;
	cin >> s;
	for(int i=0; i<s.length(); i++){
		bool v=true;
		for(int j = i+1; j<s.length(); j++){
			if(s[i] == s[j]) v=false;
		}
		if(v) p++;
	}
	if(p%2 == 0) cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;
}

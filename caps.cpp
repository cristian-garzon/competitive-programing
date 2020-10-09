#include<bits/stdc++.h>
using namespace std;
int main(){
	int ans = 0, m = 0;
	string s;
	cin >> s;
	for(int i = 1; i < s.length(); i++){
		if(s[i] == tolower(s[i])) ans++;
		else m++;
	}
	if(s[0] == tolower(s[0]) && ans == 0){
		s[0] = toupper(s[0]);
		for(int i = 1; i < s.length(); i++) s[i] = tolower(s[i]);
	}else if(m == s.length()-1){
		for(int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
	}
	cout << s << endl;
}

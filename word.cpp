#include<bits/stdc++.h>
using namespace std;
string upper(string s){
	for(int i = 0; i < s.length(); i++){
		s[i] = toupper(s[i]);
	}
	return s;
}
string lower(string s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
int main(){
	string s;
	int u = 0, l = 0;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == tolower(s[i]))l++;
		else u++;	
	}
	if(l < u) cout << upper(s) << endl;
	else cout << lower(s) << endl;
}

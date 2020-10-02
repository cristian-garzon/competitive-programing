#include<bits/stdc++.h>
using namespace std;
int main(){
	string s, ans="NO"; 
	int p=0;
	cin >> s; 
	for(int i =0; i<s.length()-1;i++){ 
		if(s[i] == s[i+1]) p++;
		else p = 0;
		if(p == 6) ans = "YES";	
	}
	cout << ans << endl;
}

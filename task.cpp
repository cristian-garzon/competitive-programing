#include<bits/stdc++.h>
using namespace std;
int main(){
	string t,ans="";
	cin >> t;
	for (int i=0; i<t.length(); i++) t[i] = tolower(t[i]);
	for(int i=0; i<t.length(); i++){
		char s=t[i];
		if(!(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'y')) ans = ans + "." + s;
	}
	cout << ans << endl;
}

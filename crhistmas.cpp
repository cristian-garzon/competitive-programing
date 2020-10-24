#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c;
	bool v=false;
	cin >> a >> b >> c;
	string d = a+b;
	if(c.length() == d.length()){
		for(int i = 0; i < d.length(); i++){
			v = false;
			for(int j = 0; j < c.length(); j++){
				if(d[i] == c[j]){
					c[j] = '!';
					v = true;
					break;
				}
			}
			if(!v) break;
		}
	}
	if(v) cout << "YES" << endl;
	else cout << "NO" << endl;
}

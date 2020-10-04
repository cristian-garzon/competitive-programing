#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,p;
	int t[100],n;
	bool v = true;
	cin >> n;
	while(v){
		n++;
		v = false;
		s = to_string(n);
		for(int i = 0; i < s.length()-1; i++){
			for(int j = i + 1; j < s.length(); j++){ 
				if(s[i] == s[j]) v = true;
			}
		}
	}
	cout << n << endl;
}


#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string w;
	cin >> n;	
	if(n>=1 && n<=100){
		for(int i=0; i<n; i++){
			cin  >> w;
			int l = w.size();
			if(l >= 10){
				cout << w[0] << l-2 << w[l-1] << endl;
			} else {
				cout << w << endl;
			}
		}
	}
}

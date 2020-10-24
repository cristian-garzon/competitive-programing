#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ans,p,a1=0,a2=0,a3=0,u1,u2,u3;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> p;
		if(p%2 == 0){
			a1++;
			u1 = i+1;
		} else if(p%3 == 0){
			a2++;
			u2 = i+1;
		} else {
			a3++;
			u3 = i+1;
		}
	}
	if(a1 == 1)cout << u1 << endl;
	else if(a2 == 1) cout << u2 << endl;
	else cout << u3 << endl;
}

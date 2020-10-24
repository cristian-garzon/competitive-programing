//THIS PROGRAMS IS´NT COMPLETE
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p,q,x,y;
	bool v = false;
	cin >> n >> p;
	for(int i = 0; i < p; i++){
		cin >> x;
		if(x ==  n)v = true;
	}	
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> y;
		if(y == n && !v)v = true;
		else v = false;
	}
	if(v)cout << "I become the guy." << endl;
	else cout << "Oh, my keyboard!" << endl;
}

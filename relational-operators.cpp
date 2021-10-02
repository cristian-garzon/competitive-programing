#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	long a[t], b[t];
	for(int i=0; i<t; i++){
		cin >> a[i] >> b[i];
	}
	for(int i=0; i<t; i++){
		if(!(a[i] <= b[i])) cout << ">" << endl;
		else if (a[i] == b[i]) cout << "=" << endl;
		else cout << "<" << endl;
	}
}

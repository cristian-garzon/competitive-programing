#include<bits/stdc++.h>
	using namespace std;
int main(){
	int n, m[10] = {4, 7, 47, 74, 447, 474, 477, 774, 747,744};
	bool v = false;
	cin >> n;
	for(int i = 0; i < 10; i++){
		if(n % m[i] == 0) v = true;		
	}	
	if(v) cout << "YES" << endl;
	else cout << "NO" << endl;	
}

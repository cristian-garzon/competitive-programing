#include<bits/stdc++.h>
using namespace std;
int main(){
	int ans = 3, v[4];
	for(int i = 0; i < 4; i++) cin >> v[i];
	sort(v,v+4);
	for(int i = 0; i < 3; i++){
		if(v[i] != v[i+1]){
			ans--;
		}	
	}
	cout << ans << endl;
}

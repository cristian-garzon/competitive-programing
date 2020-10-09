#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k,ans, p = 1, v = 2;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		if(p > n){
			ans = v;
			v += 2;
		}
		else {	
			ans = p;
			p += 2;
		}	
		if(i +1 == k){
			cout << ans << endl; 
			break;
		}
	}
}

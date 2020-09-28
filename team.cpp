#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p,v,t,ans=0;
	cin >> n;
	if(n >= 1 && n <=1000){
		for(int i = 0; i < n ; i++){
			cin >> p >> v >> t;
			if(p + v + t >= 2){
				ans++;
			}
		}
		cout << ans << endl;
	}
}

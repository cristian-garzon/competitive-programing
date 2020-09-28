#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,ans=0,p=0;
	cin >> m >> n;
	if(m >= 1 && n >= m && n <= 16){
		while(p < (m*n)-1){
			p = p + 2;
			ans ++;
		}
	}
	cout << ans << endl;
}

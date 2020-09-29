#include<bits/stdc++.h>
using namespace std;
int main(){
	int m[5][5], c,r,ans = 0;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> m[i][j];
			if(m[i][j] == 1){
				c = j;
				r = i;	
			}
		}
	}
	while(r != 2 || c != 2){
		if(r < 2){
			r++;
			ans++;
		}else if(r > 2){
			r--;
			ans++;
		}
		if(c < 2){
			c++;
			ans++;
		} else if(c > 2){
			c--;
			ans++;
		}
	}
	cout << ans << endl;
}

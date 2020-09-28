#include<bits/stdc++.h>
using namespace std;
int solve(int s[], int k, int n){
	int ans=0;
	for(int i = 0; i < n; i++){
		if(s[k-1] <= s[i]  && s[i] > 0){
			ans++;	
		}
	}
	return ans;
}
int main(){
	int n,k,a;
	cin >> n >> k;
	if(n >= k && k >= 1 && n <=50){
		int s[n];
		for(int i = 0; i < n; i++){			
			cin >> a;
			s[i] = a;
		}
		cout << solve(s,k,n) << endl;
	}
}

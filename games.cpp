#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l[100],v[100],ans=0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> l[i] >> v[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(l[i]==v[j])ans++;
		}
	}
	cout << ans << endl;
}

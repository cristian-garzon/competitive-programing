#include<bits/stdc++.h>
using namespace std; 
int main(){
       	long n,a,b,ans;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		ans = 0;
		if(a%b != 0) ans = b-(a%b);	
		cout <<  ans << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,p;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> a >> b;
		int c = 0;
		if(b > a){
			p = a;
			a = b;
			b = p;
		}
		if((a - b)%10 > 0) c++;
		cout << c + (a - b)/ 10 << endl;
	}
}

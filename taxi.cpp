#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s, p = 0,c1 = 0,c2 = 0,c3 = 0,c4 = 0,min, ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		if( s == 1) c1++;
		if( s == 2) c2++;
		if( s == 3) c3++;
		if( s == 4) c4++;
	}
	min = c4;
	while(c1 != 0 && c3 != 0){
		c3 --;
		c1--;
		min++;
	}
	if(c1 == 0 && c3 !=0){
		min += c3;
		c3 = 0;
	}
	min += c2/2;
	if(c2%2 != 0){
		if(c1 <= 2){
			min++;
			c2 = 0;
			c1 = 0;
		} else {
			c1-=2;
			min++;
			c2 = 0;
		}
	}
	if(c1 != 0){
		min += c1/4;
		if(c1%4 != 0){
			min++;
		}
	}
	cout << min << endl;
}

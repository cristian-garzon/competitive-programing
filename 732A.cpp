#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,r, i = 1, c=1;
	cin >> k >> r;
	int m = k;
	while(k % 10 != r && k % 10 != 0) {
		c++;
		k = m * c;
	}
	cout << c << endl;
}

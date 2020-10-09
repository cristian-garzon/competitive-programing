#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,max=0,c,p[5];
	cin >> a >> b >> c;
	p[0] = a*(b+c);
	p[1] = a*b*c;
	p[2] = (a+b)*c;
	p[3] = a + b*c;
	p[4] = a + b + c;
	for(int i = 0; i < 5;i++){
		if(p[i] > max) max = p[i];
	}
	cout << max << endl;
}

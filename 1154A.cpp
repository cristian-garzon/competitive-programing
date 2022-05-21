#include<bits/stdc++.h>
using namespace std;
int main(){
	int v[4];
	for(int i = 0; i < 4; i++) cin >> v[i];
	sort(v, v + 4 , greater<int>());
	cout << v[0] - v[3] << " " << v[0] - v[2] << " "<< v[0] - v[1] << endl;
}

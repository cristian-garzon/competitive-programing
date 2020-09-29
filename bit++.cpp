#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a=0;
	string x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x == "X++" || x == "++X") a++;
		else if(x == "X--" || x == "--X")a--;
	}
	cout << a << endl;
}

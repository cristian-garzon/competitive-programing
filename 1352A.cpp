#include<bits/stdc++.h>
using namespace std;
int main (){
	int t, k;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> k;
		int n = 1;
		vector<int> r;  
		while(k){
			if(k % 10){
				r.push_back((k % 10) * n);
			}
			k = k / 10;
			n = n * 10;
		}
		cout << r.size() << endl;
		for(int i = 0; i < r.size(); i++){
			cout << r[i] << " ";
		}
	}
}

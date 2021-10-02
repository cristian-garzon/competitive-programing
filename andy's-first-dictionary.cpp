#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,x;
	char space = ' ';
	vector <string> w{};
	cin >> s;
	stringstream d(s);
	while(getline(d,x,space)){
		x.erase(remove_if(x.begin(),x.end(),::ispunct),x.end());
		w.push_back(x);
	}

	for(const auto &str : w){
		cout << str << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,ans="",t;
	int aux,v[100],p=0,min;
	cin >> s;
	if(s.length()>1){
		for(int i=0; i<=s.length(); i=i+2){
			t = s[i];
			v[p] = stoi(t);
			p++;
		}
		for (int i=0; i<=s.length()/2; i++){
		 	min = i;
			for (int j=i+1; j<=s.length()/2; j++){
				if(v[j]<v[min]){ 
					min = j;
				}
			}
			aux = v[i];
		     	v[i] = v[min];
			v[min] = aux;
		}
		for(int i=0; i<=s.length()/2-1; i++){
			ans = ans + to_string(v[i]) + "+";
		}	
		cout << ans << v[s.length()/2] << endl;
	} else {
		cout << s << endl;
	}
}

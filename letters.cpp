#include<bits/stdc++.h>
using namespace std;
int main(){
        string s;
        int ans = 1;
        getline(cin, s);
        if(s.length()>2){
        	char p[s.length()/3]; 
        	for(int i = 1, j=0; i < s.length(); i+=3, j++) p[j]=s[i];
        	sort(p, p+s.length()/3);
        	for(int i = 0; i <(s.length()/3)-1; i++){
      			ans++;
       	        	if(p[i] == p[i+1]) ans--;
    		}
		cout << ans << endl;
        }
	else cout << 0 << endl;
}

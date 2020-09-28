#include <iostream>
using namespace std;
int main(){
	int w;
	cin >> w;
	if(w >= 1 && w <= 100){
		if(w%2 == 1 || w == 2){
			cout << "no" << endl;
		} else {
			cout << "yes" << endl;
		}
	}
}

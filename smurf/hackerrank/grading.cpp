#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
	cin >> n;
	if(n>= 38){
	    if((n%5) >= 3)
		cout << ((n/5)*5)+5 << endl;
	    else 
		cout << n << endl;
	} else 
	    cout << n << endl;
    }
    return 0;
}

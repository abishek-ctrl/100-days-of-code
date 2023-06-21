#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x<=3) cout<<"BRONZE"<<'\n';
	    else if(x>3 and x<=6) cout<<"SILVER"<<'\n';
	    else cout<<"GOLD"<<'\n';
	}
	return 0;
}

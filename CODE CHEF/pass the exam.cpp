#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	   // if(x>=100 && y>=100 && z>=100){
	   //     cout<<"PASS"<<endl;
	     if((x>=10 && y>=10 && z>=10) && x+y+z>=100){
	        cout<<"PASS"<<endl;
	    }
	    else{
	        cout<<"FAIL"<<endl;
	    }
	}
	return 0;
}

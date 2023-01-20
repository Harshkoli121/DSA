#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(y==0 || x==y)
	    {
	        cout<<0<<endl;
	    }else if(y>(x*0.50)){
	        cout<<x-y<<endl;
	    }else {
	        cout<<y<<endl;
	    }
	    
	}
	return 0;
}

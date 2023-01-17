#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(y*z>=x)
	    {
	        cout<<"Yes"<<endl;
	    }else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}

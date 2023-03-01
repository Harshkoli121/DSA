#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int res;
	    res=a+(b-c)*d;
	    cout<<res<<endl;
	}
	return 0;
}

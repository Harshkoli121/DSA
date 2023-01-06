#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int i=1;
	    cin>>n;
	    while(n>=0)
	    {
	        n=n-i;
	        i++;
	    }
	    int res;
	    res=i-2;
	    cout<<res<<endl;
	}
	return 0;
}

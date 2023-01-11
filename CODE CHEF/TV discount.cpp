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
	    if((a-c)<(b-d))
	    {
	        cout<<"First"<<endl;
	    }else if((a-c)==(b-d))
	    {
	        cout<<"Any"<<endl;
	    }else
	    {
	        cout<<"Second"<<endl;
	    }
	}
	return 0;
}

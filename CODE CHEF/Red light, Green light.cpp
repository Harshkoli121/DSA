#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    int count=0;
	    cin>>x>>y;
	    int arr[x];
	    for(int i=0;i<x;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<x;i++)
	    {
	        
	        if(arr[i]>y)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;;
	}
	return 0;
}

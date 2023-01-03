#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int count = 0;
	int arr[5];
	for(int i=0;i<5;i++){
	    cin>>arr[i];
	    if(arr[i]>=10)
	    count++;
	}
	cout<<count;
	return 0;
}

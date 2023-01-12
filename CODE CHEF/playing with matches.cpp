#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int sum=a+b;
	    int j=sum;
	     int count =0;
	    while(j>0)
	    {
	       
	     int r=j%10;
	     if(r==2 || r==3 || r==5)
	     {
	     count=count+5;
	     }
	     else if(r==0 || r==9 || r==6)
	     {
	    count=count+6;
	     }
	     else if(r==4){
	         count=count+4;
	     }else if(r==8){
	         count=count+7;
	     }else if(r==7){
	         count=count+3;
	     }else{
	         count =count+2;
	     }
	     j=j/10;
	     
	}
	cout<<count<<endl;
	}
	return 0;
}

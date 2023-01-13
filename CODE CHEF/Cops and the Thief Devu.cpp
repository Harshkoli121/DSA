#include <iostream>
using namespace std;

int main() {
	int  t;
	cin>>t;
	while(t--){
	int M,x,y;
	cin>>M>>x>>y;
	int Mrr[M];
	for(int i=0;i<M;i++){
	    cin>>Mrr[i];
	}
	int arr[101]={0},cnt=0;
	while(M--){
	     int min=1,max=100;
	    if(Mrr[M]-x*y>0){
	        min=Mrr[M]-x*y;
	       }
	    if(Mrr[M]+x*y>100){
	        max=100;
	    }
	    else{
	       max=Mrr[M]+x*y; 
	    }
	 for(int i=min;i<=max;i++){
	     arr[i]=1;
	 }   
	}
	for(int i=1;i<=100;i++){
	    cnt+= arr[i];
	 } 
	 cout<<100-cnt<<endl;
	}
	}

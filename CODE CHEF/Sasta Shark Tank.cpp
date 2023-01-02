#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int n=(x*100/10);
        int n1=(y*100/20);
        int n2=max(n,n1);
        if(n==n1){
            cout<<"ANY"<<endl;
        }else if(n2==n)
        {
            cout<<"FIRST"<<endl;
        }else{
            cout<<"SECOND"<<endl;
        }
    }
}

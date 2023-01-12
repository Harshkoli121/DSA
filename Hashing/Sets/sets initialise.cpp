#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(6);
   for(int a:s){
       cout<<a<<" ";
   }
}

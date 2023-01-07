#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int ar[], int arr3[], int n1, int n2){
    int i=0,j=0,k=0;
    while(i<n1){
        arr3[k++]=arr[i++];
    }
    while(j<n2){
        arr3[k++]=ar[j++];
    }
    sort(arr3,arr3+n1+n2);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        cin>>ar[j];
    }
    int n1=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(ar)/sizeof(ar[0]);

    int arr3[n1+n2];
    merge(arr,ar,arr3,n1,n2);
    for(int i=0;i<n1+n2;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}

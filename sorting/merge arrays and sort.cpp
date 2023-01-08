/**
 * Merge Sort Algorithm
 *			It is a divide and conqueer algorithm
 *			TimeComplexity : O(nlogn)
 *			SpaceComplexity: O(n) (Space is taken by merging two sorted arrays)
 * 
 * Algorithm:
 *			Divide the array into two parts
 *			Sort both the parts separately
 *			Merge both the sorted parts such that merged array is sorted
 *
 * */
 
#include <bits/stdc++.h>
using namespace std;
 
 
/**
 * The printArray function is a helper function that simply prints 
 * the elements of the input array to the console.
**/
void printArray(int A[], int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl<<endl;
}
 
/**
 * The mergeSortedParts function takes a array which have two sorted parts [start,mid] and [mid+1, end]
 * it will merge both the parts [start, mid] and [mid+1, end] into the array such that 
 * the part [start, end] becomes a sorted array.
**/ 
void mergeSortedParts(int A[], int start, int end, int mid){
	int s[end-start+1];
	int i=start,j=mid+1, k=0;
	while(i<=mid && j<=end){
		if(A[i]<A[j]){
			s[k] = A[i];
			i++; 
			k++;
		}
		else{
			s[k] = A[j];
			j++; 
			k++;
		}
	}
	while(i<=mid){
		s[k] = A[i];
		i++; 
		k++;
	}
 
	while(j<=end){
		s[k] = A[j];
		j++; 
		k++;
	}
 
	//copy the sorted array in the input array itself from [start to end]
	for(i=0;i<k;i++){
		A[start+i]=s[i];
	}
} 
 
 
/**
 * sort function will take a array 'A' and 'start' and 'end' and will sort the array 'A' b/w
 * indexes [start to end] (inclusive) without touching the data at index outside [start, end]
 * */
void sort(int A[], int start, int end){
	if(start == end){
		return;
	}
 
	int mid = (start+end)/2;
	cout<<" start: "<<start<<" end: "<<end<<" mid: "<<mid<<"\n";
	sort(A,start,mid);
	cout<<"first sorted half for start: "<<start<<" end: "<<end<<" mid: "<<mid<<"\n";
	printArray(A, 10);
 
	sort(A,mid+1,end);
	cout<<"second sorted half for start: "<<start<<" end: "<<end<<" mid: "<<mid<<"\n";
	printArray(A,10);
 
	mergeSortedParts(A,start, end, mid);
	cout<<"sorted portion after merge: "<<start<<" end: "<<end<<" mid: "<<mid<<"\n";
	printArray(A,10);
}
 
int main() {
    int A[10] ={5,4,9,6,3,10,7,1,2,8};
    sort(A,0,9);
 
    cout<<"final sorted Array: \n";
    printArray(A, 10);
 
	return 0;
}

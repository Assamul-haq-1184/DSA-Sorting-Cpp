#include<iostream>
using namespace std;
 void selectionSort(int arr[],int n){
 	for(int i=0;i<n-1;i++){
 		int minIndex = i;
 		for(int j=i+1;j<n;j++){
 			if(arr[j]<arr[minIndex]){
 				minIndex = j;
			 }	 
		 }
		 if(minIndex!=i){
		 	swap(arr[i],arr[minIndex]);
		 }
	 }
	 cout<<"Array sorted by Selection sort :\n";
	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";
	 	
	 }
	return; 
 } 
int main(){
 int n;
 cout<<"Please Enter the size of Array :\n";
 cin>>n;
 int array[n];
 cout<<"Enter the array of elements :\n";
 for(int i =0;i<n;i++){
 	cin>>array[i];
 }
 selectionSort(array,n);
 return 0;
}

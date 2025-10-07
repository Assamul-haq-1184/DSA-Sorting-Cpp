#include<iostream>
using namespace std;
 void bubbleSort(int arr[],int n){
 	bool swaped = false;
 	for(int i = 0; i<n-1;i++){
 		for(int j=0;j<n-i-1;j++){
 			if(arr[j]>arr[j+1]){
 				swap(arr[j],arr[j+1]);
 				swaped = true;
			 }	 
		 }
		 if(swaped==false){
		 	return;
		 }
	 }
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
 bubbleSort(array,n);
 return 0;
}

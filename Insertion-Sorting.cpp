#include<iostream>
using namespace std;
 void insertionSort(int arr[],int n){
 	for(int i=1;i<n;i++){
 		int temp = arr[i];
 		int j;
 		for(j=i-1;j>=0&&arr[j]>temp;j--){
 				arr[j+1]=arr[j];
            }
			 
			 arr[j+1]=temp;
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
 insertionSort(array,n);
 return 0;
}

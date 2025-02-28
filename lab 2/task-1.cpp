//Write a function that dynamically allocates an array of integers. The function should accept an
//integer argument indicating the number of elements to allocate. The function should return a
//pointer to the array.
#include<iostream>
using namespace std;


int *dma(int n){
	
	int *arr=new int[n];	
	if(arr!=NULL){
		cout<<"array allocated sucessfully"<<endl;
	}
	

	return arr;
	
}


int main(){
	int n;
	cout<<"Enter how many element you in an array :";
	cin>>n;

int *array=dma(n);
	
	for(int i=0;i<n;i++){
		cout<<"Enter element "<<i+1<<" :";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	
	delete[] array;
	
}

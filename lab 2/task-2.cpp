#include <iostream>
using namespace std;

int mode(int n,int *arr){
	int count[n]={0};
	int index=0;
	
for(int i=0;i<n;i++){
		count[arr[i]]++;
	}
	int maximum=count[0];
	for(int i=0;i<n;i++){
	if(maximum < count[i]){
        maximum=count[i];
		index=i;	
	}
}

if(maximum>2){
	return index;
}
else{
	return -1;
}
}	
		

int main(){
	
	int n;
	cout<<"Enter number of element you want to enter : ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter element "<<i+1<<" :";
		cin>>arr[i];
	}
	
	int *ptr=arr;
	
	int repeat=mode(n,arr);
	if(repeat==-1){
		cout<<"there is not mode"<<endl;
	}
	else{
		cout<<"mode is :"<<repeat<<endl;
	}
	
}

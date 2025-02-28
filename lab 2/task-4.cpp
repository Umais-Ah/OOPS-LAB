//Write a program that implements a basic calculator using pointer arithmetic to perform addition,
//subtraction, multiplication, and division. The program should take two integer inputs from the
//user, perform the selected operation, and output the result. Use pointers to pass values to functions
//and handle the result.
#include<iostream>
using namespace std;

int calculator(int *a,int *b){
	char op;
	
	do{
	cout<<"enter operation :"<<endl;
	cin>>op;
          
		  switch(op){
		  	
		  	case  '+' :  
		  	    return *a+*b;
		  	    break;
		  	case '-' :5
		  		return *a-*b;
		  		break;
		  	case '/' :	
		  		return *a/ (*b);
		  		break;
		  	case '*' :	
		  		return (*a)*(*b);
		  		break;
		  	
		  	default:
		  		cout<<"invalid operator, please enter  again :";
		  	    break;
		  }		  
	}	while(op != '*'&& op !='+' && op !='-' &&  op !='/');
}



int main(){
	 int a; int b;
	cout<<"enter first value :";
	cin>>a;
	cout<<"enter second value :";
	cin>>b;

	int answer=calculator(&a,&b);
	cout<<"answer  is :"<<answer<<endl;
}

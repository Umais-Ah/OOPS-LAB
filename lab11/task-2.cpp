
#include<iostream>
#include <stdexcept>
using namespace std;


class StackUnderflowException : public exception{
	public:
	const char* what() const noexcept override{
		return "stack is empty";
}
};
template <class T>
class Stack{
	private:
		T array[5];
		int count;
	public:
		Stack(){
			count=0;
		}
		
		void push(T item){
		   array[count]=item;
		   count++;	
		}
		
		T pop(){
			int temp=0;
				if(count==0){
					throw StackUnderflowException();
				}

			
           count--;
           return array[count];
		}
	
};

int main() {
    Stack<int> s;
    
  
    s.push(2);
    s.push(3);
    cout << "Items popped from the stack:" << endl;

    try {
        cout << "Popped: " << s.pop() << endl;  
    } catch (StackUnderflowException& e) {
        cout << e.what() << endl;
    }

    try {
        cout << "Popped: " << s.pop() << endl; 
    } catch (StackUnderflowException& e) {
        cout << e.what() << endl;
    }

    try {
        cout << "Popped: " << s.pop() << endl; 
    } catch (StackUnderflowException& e) {
        cout << e.what() << endl;
    }
    
    return 0;
}

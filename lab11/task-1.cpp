#include<iostream>

using namespace std;

class OutOfBoundsException {
    public:
        void printMessage() const {
            cout << "Invalid array index access." << endl;
        }
    };

template<typename T>
class SafeArray{
    private:
    T array[5];
    int size=5;
    public:

    void set(int index, T value){
            array[index]=value;
    }
    
     T get(int index){
               if(index < 0 || index > size){
                throw OutOfBoundsException();
               }
            
            return array[index];
     }
};
int main(){
    int value;
    cout<<endl<<"integer"<<endl;
    try{
    class SafeArray<int> s;
    

    for(int i=0;i<5;i++){
        cout<<"Enter value for "<<i+1<<" :";
        cin>>value;
        s.set(i,value);
    }

    
     cout<<"3rd index of integer array :"<<s.get(3)<<endl;
     cout<<"exception handling case :" <<s.get(-1)<<endl;
    
     }catch (const OutOfBoundsException& e) {
        e.printMessage();
    }

    cout<<endl<<"double "<<endl;

    double  val;

        try{
        SafeArray<double> s2;
        
        for(int i=0;i<5;i++){
            cout<<"Enter value for "<<i+1<<" :";
            cin>>val;
            s2.set(i,val);
        }
    
        
         cout<<"3rd index of integer array :"<<s2.get(3)<<endl;
         cout<<"exception handling case :" <<s2.get(-1)<<endl;
        
        
   
    } catch (const OutOfBoundsException& e) {
        e.printMessage();  //error
    }

    return 0;
}






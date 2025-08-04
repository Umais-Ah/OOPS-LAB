#include<iostream>
using namespace std;

class ComplexNumber{
   private:
    int a;
    int b;
    public:
ComplexNumber(){ }
ComplexNumber(int a,int b){
        this->a=a;
        this->b=b;
}



ComplexNumber operator+(ComplexNumber &c){
       ComplexNumber temp;
       temp.a=a+c.a;
       temp.b=b + c.b;
       return temp;
}


ComplexNumber operator-(ComplexNumber &c){
    ComplexNumber temp;
    temp.a=a - c.a;
    temp.b=b - c.b;
    return temp;
}


ComplexNumber operator*(ComplexNumber &c){
    ComplexNumber temp;
    temp.a=a*c.a;
    temp.b=b * c.b;
    return temp;
}


ComplexNumber operator==(ComplexNumber &c){
    ComplexNumber temp;
    if(a==c.a & b==c.b){
        cout<<"both complex number are equal "<<endl;
    }
    else{
        cout<<"both complex number are not equal"<<endl;
    }
}


void display(){
    cout<<a<<" "<<b<<"i"<<endl;
}

};

int main(){
  ComplexNumber c(3,4);
  ComplexNumber c1(5,6);
  ComplexNumber c2=c+c1;
  c2.display();

  ComplexNumber c3=c-c1;
  c3.display();

  ComplexNumber c4=c*c1;
  c4.display();


  c==c1;
 








}



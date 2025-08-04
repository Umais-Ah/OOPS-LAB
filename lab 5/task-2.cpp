#include <iostream>
using namespace std;


class divSales{
   private:
   int quarter[4];
   static int totalsales;
   public:
   void sales(int s1,int s2,int s3,int s4){
    quarter[0]=s1;
    quarter[1]=s2;
    quarter[2]=s3;    
    quarter[3]=s4;
    totalsales+=s1+s2+s3+s4;
   }

   void display(){
      for(int i=0;i<4;i++){
        cout<<"| Quarter "<<i+1<<" |"<<quarter[i]<<endl;
      }
   }

   static int gettotalsales(){
    return totalsales;
   }


     int getquartersales(int index){
        if(index >= 0 && index <4){
            cout<<"quarter sales "<<index<<" :";
            return quarter[index];
        }
        else{
            cout<<endl<<"invalid index"<<endl;

        }
     }
};

int divSales :: totalsales=0; 

int main() {
    divSales  d[6];
    int s1,s2,s3,s4;
    for(int i=0;i<6;i++){
    cout<<endl<<"Divison "<<i+1<<endl;
    cout<<"Enter sales of first quarter :";
    cin>>s1;
    while(s1 < 0){
    cout<<"Invalid sales,Enter again sales of first quarter :";
    cin>>s1;
    }

    cout<<"Enter sales of second quarter :";
    cin>>s2;
    while(s2 < 0){
    cout<<"Invalid sales,Enter again sales of second quarter :";
    cin>>s2;
    }

    cout<<"Enter sales of third quarter :";
    cin>>s3;
    while(s3 < 0){
    cout<<"Invalid sales,Enter again sales of third quarter :";
    cin>>s3;
    }

    cout<<"Enter sales of fourth quarter :";
    cin>>s4;
    while(s4 < 0){
    cout<<"Invalid sales,Enter again sales of fourth quarter :";
    cin>>s4;
    }
    d[i].sales(s1,s2,s3,s4);
}

for(int i=0;i<6;i++){
    cout<<endl<<"Divison "<<i+1<<endl;
    d[i].display();
}

cout<<"total sales are "<<divSales::gettotalsales()<<endl;


cout<<d[1].getquartersales(2);
cout<<d[5].getquartersales(5);

    return 0;
}
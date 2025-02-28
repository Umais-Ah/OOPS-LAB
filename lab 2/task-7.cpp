#include<iostream>
using namespace std;
struct drink{
   string name;
   float cost;
   int numDrink;
};

int main(){
    int opt;
    float money=0; int total=0; string name; int numDrinks; float change=0;

 drink d[5] = {
    {"Cola", 0.75, 20},
    {"Root-Beer", 0.75, 20},
    {"Lemon-Lime", 0.75, 20},
    {"Grape-Soda", 0.80, 20},
    {"Cream-Soda", 0.80, 20}
};

do{
  int flag=0;
  cout<<endl<<"------Welcome------"<<endl;
   for(int i=0;i<5;i++){
        cout<<d[i].name<<" "<<d[i].cost<<" "<<d[i].numDrink<<endl;
    }
   
    cout<<endl<<"1. Buy Drink"<<endl;
    cout<<"2. Quit"<<endl<<endl;


   cout<<"Enter option : ";
   cin>>opt;
   switch(opt){
     
    case 1: {
        cout<<"Enter Drink Name :";
        cin>>name;
      for(int i=0;i<5;i++){
          if(name==d[i].name){
            flag=1;
            if(d[i].numDrink > 0){
            cout<<"Enter money :";
            cin>>money;
            if(money >= d[i].cost && money <= 1){
                 change=money-d[i].cost;
                 total+=d[i].cost;
                 cout<<"your change is :"<<change<<endl;
                  d[i].numDrink-=1;      
            }
            else{
                cout<<"Invalid money or enter money less than 1 dollar"<<endl;
                break;
            }
            }
            else{
                cout<<d[i].name<<" is all out"<<endl;
                break;
            } 
          }
          if(flag==0){
            cout<<"Invalid name"<<endl;
            break;
          }
      }
      break;
    }
      case 2: {
        cout<<"Program Ending...."<<endl;
        return 0;
      }

      default :{
        cout<<"Invalid option";
      }
    }
}while(opt!=2);

}

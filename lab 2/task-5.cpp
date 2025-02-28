#include<iostream>
using namespace std;

	struct MovieData {	
		string title;
		string director;
		int runtime;
		int yearReleased;
	};


void display(struct MovieData m){
	  
		cout<<"movie title :"<<m.title<<endl;
		cout<<"movie director :"<<m.director<<endl;
		cout<<"movie runtime :"<<m.runtime<<endl;
		cout<<"movie yearReleased :"<<m.yearReleased<<endl<<endl;
}


int main(){
 struct MovieData m1;
 struct  MovieData m2;
      	
	cout<<"Enter for Movie 1"<<endl;
		cout<<"Enter Movie title :";
		cin>>m1.title;
		cout<<"Enter Movie director :";
		cin>>m1.director;
		cout<<"Enter runtime  :";
		cin>>m1.runtime;
		cout<<"Enter Movie year released :";
		cin>>m1.yearReleased;
		
		cout<<"Enter for Movie 2"<<endl;
		cout<<"Enter Movie title :";
		cin>>m2.title;
		cout<<"Enter Movie director :";
		cin>>m2.director;
		cout<<"Enter runtime  :";
		cin>>m2.runtime;
		cout<<"Enter Movie year released :";
		cin>>m2.yearReleased;
	
	cout<<endl<<"Movie 1 is :"<<endl;
	display(m1);
	cout<<"Moive 2 is :"<<endl;
	display(m2);
	
	
	
}

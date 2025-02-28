//Write a program that count the number of vowels and consonants in a string using a poiuunter.
#include<iostream>
using namespace std;


void  volcons(char *ptr,string word){
	 int vowel=0; int consonant=0;
	for(int i=0;i<word.length();i++){
		if((*ptr+i > 'a' && *ptr + i <'z')|| (*ptr + i >'A' && *ptr + i <'Z') )
		if(*(ptr + i)=='a'||*(ptr + i)=='e' ||  *(ptr + i)=='i' ||  *(ptr + i)=='o' || *(ptr + i)=='u' ||*(ptr + i)=='A'|| *(ptr + i)=='E' || *(ptr + i)=='I' ||  *(ptr + i)=='O' || *(ptr + i)=='U' ){
			vowel++;
		}
		else{
			consonant++;
		}
	}
	
	cout<<"vowel is :"<<vowel<<endl;
	cout<<"consonent is :"<<consonant<<endl;
	
	
}



int main(){
	
	string word;
	cout<<"enter string :";
	cin>>word;
	
	
	char *ptr=&word[0];
	volcons(ptr,word);
	
	
}

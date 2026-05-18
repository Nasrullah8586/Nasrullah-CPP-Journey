#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	char ch;
	cout<<"Enter a letter: ";
	cin>>ch;
	//here we just take lower case charecter that's why we use "tolower"
	ch= tolower(ch);
	if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		cout<<"vowel";
	}
	else{
		cout<<"consonant";
	}

	getch();
	
}


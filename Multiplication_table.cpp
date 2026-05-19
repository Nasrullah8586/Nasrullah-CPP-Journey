#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int num,x;
	cout<<"Enter a number: ";
	cin>> num;
	
	for(int i=1;i<=10;i++){
		
		x=num*i;
		
		cout<<num<<"X"<<i<<"="<<x<<endl;
		
	   	
	}
	getch();
	
}


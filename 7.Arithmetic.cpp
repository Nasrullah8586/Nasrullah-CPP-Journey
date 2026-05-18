#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	
	int num1,num2;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	
	int sum;
	sum=num1+num2;
	cout<<"The sum is:"<<sum;
	cout<<endl;
	
	int sub;
	sub=num1-num2;
	cout<<"The subtraciton is:"<<sub;
	cout<<endl;
	
	int mul;
	mul=num1*num2;
	cout<<"The multiplication is:"<<mul;
	cout<<endl;
	
	double div;
	div=(float)num1 / num2;
	cout<<"The division is:"<<div;
	cout<<endl;
	
	int rem;
	rem=num1 % num2;
	cout<<"The reminder is:"<<rem;
	
	getch();
	
	
}


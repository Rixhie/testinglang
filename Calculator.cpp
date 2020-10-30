#include<iostream>
using namespace std;

int main(){
	
	char cont;
	do{
		system("cls");
		int num1, num2, add=0, sub=0, mult=0, div=0;
		char choose;
		cout<<"[+] - Addition\n[-] - Subtraction\n[*] - Multiplication\n[/] - Devision\nChoose Operator: "; 
		cin >> choose;
		cout<<endl;
		switch(choose){
			
			case '+':
				cout<<"Enter 1st No: "; cin>> num1;
				cout<<"Enter 2nd No: "; cin>> num2;
				add = num1 + num2;
				cout<<"Answer is: "<<add;
				break;
				
			case '-':
				cout<<"Enter 1st No: "; cin>> num1;
				cout<<"Enter 2nd No: "; cin>> num2;
				sub = num1 - num2;
				cout<<"Answer is: "<<sub;
				break;
				
			case '*':
				cout<<"Enter 1st No: "; cin>> num1;
				cout<<"Enter 2nd No: "; cin>> num2;
				mult = num1 * num2;
				cout<<"Answer is: "<<mult;
				break;
				
			case '/':
				cout<<"Enter 1st No: "; cin>> num1;
				cout<<"Enter 2nd No: "; cin>> num2;
				div = num1 / num2;
				cout<<"Answer is: "<<div;
				break;
		}
		cout<<"\nDo you want to Continue? [y/n]: "; cin>>cont;
	}while(cont == 'y');
}

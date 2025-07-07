#include<iostream>
using namespace std;
int main (){
	double a , b ;
	char op ;
	char cont ;
	
	do{
	  cout << "enter 1st value :";
	  
	  cin >> a ;
	  
	  cout << "choose operator (+,-,*,/):";
	  
	  cin >> op ;
	  
	  cout << "enter 2nd value:";
	  
	 cin >> b ;
	 
	 switch (op) {
	 	case '+':
	 		cout << "answer = " << a + b << endl ;
	 		break;
	 	case '-':
	 		cout << "answer = " << a - b << endl ;
	 		break;
		case '*':
	 		cout << "answer = " << a * b << endl ; 
	 		break;
	 	case '/':
	 		if (b != 0)
	 		cout << "answer = " << a / b << endl ;
	 		else 
	 		    cout << "answer = " << "math error : can't divide by zero ! sorry " << endl ;
	 		break;
	 	default:
	 		cout << "invalid operation" << endl ;
	 }
	 
	    cout << "would you like to calculate again ? (y/n):";
		cin >> cont;
	} 
	 while (cont == 'Y' || cont == 'y');
	 
	 cout << "thanks for using" << endl ; 
} 

#include <iostream>
#include <math.h>
using namespace std;

class Number{

private: 
	int _n, _x;
	string _Operator;
public: 
	Number(int n, int x, string Operator){
	_n = n;
	_x = x;
	_Operator = Operator;
}
int add(){
int AddSum = 0, coefficient;
string result;
int n = _n;
cout << "Coefficient (" << n << ") :  ";
cin >> coefficient;
	while(n >= 0){
	AddSum += coefficient * (pow(_x, n));
	result += (to_string(coefficient) + "*" + to_string(_x) + "^" + to_string(n)) + "+";
	n--;	
	coefficient--;
	}
	cout << result.substr(0,result.length()-1) << " = ";	
	return AddSum;
}
int subtract(){
int AddSum = 0,coefficient;
int n = _n;
string result;
cout << "Coefficient (" << n << ") :  ";
cin >> coefficient;
	while(n >= 0){
	AddSum -= coefficient * (pow(_x, n));
	result += (to_string(coefficient) + "*" + to_string(_x) + "^" + to_string(n)) + "+";
	n--;
	coefficient--;
	}	
	cout << result.substr(0,result.length()-1) << " = ";
	return AddSum;
}
int multiply(){	
int AddSum = 0, coefficient;
string result;
int n = _n;
cout << "Coefficient (" << n << ") :  ";
cin >> coefficient;	
	while(n >= 0){
	AddSum *= (coefficient * pow(_x, n));
	result += (to_string(coefficient) + "*" + to_string(_x) + "^" + to_string(n)) + "+";
	n--;
	coefficient--;
}
	cout << result.substr(0,result.length()-1) << " = ";
	return 	AddSum;
}
};
int main(){
int n, x;
string Operator;
cout << "Input members' count: ";
cin >> n;
cout << "Input X: ";
cin >> x;
cout << "Input operator(add,subtract,multiply) : ";
cin >> Operator;

Number* number = new Number(n,x,Operator);
if(Operator == "add") cout << number-> add() << endl;
if(Operator == "subtract") cout << number-> subtract() << endl;
if(Operator == "multiply") cout << number-> multiply() << endl;

return 0;
}

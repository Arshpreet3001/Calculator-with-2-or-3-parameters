#include<iostream>
using namespace std;
void calculator();
int main()
{
	calculator();
	return 0;
}
void calculator()
{
	char sign, cont;
	int p , num1, num2, num3;
	cout<<"Enter the operator +,-,*,/ "<<endl;
	cin>>sign;
	cout<<"Enter the no. of parameters 2 or 3"<<endl;
	cin>>p;
	if((sign == '/') && (p>=3))
	{
		cout<<"divide cannot be done between 3 parameters"<<endl;
		cout<<"Enter 2 as parameter"<<endl;
		cin>>p;
	}
	if(p==2)
	{
		cout << "Enter two operands: ";
		cin >> num1 >> num2;
		switch(sign) 
		{

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
 
    	}
	}
	else if(p==3)
	{
			cout << "Enter three operands: ";
		cin >> num1 >> num2 >> num3;
		switch(sign) 
		{

    case '+':
      cout << num1 << " + " << num2 << " + " << num3 << " = " << num1 + num2 + num3;
      break;

    case '-':
      cout << num1 << " - " << num2 << " - " << num3 << " = " << num1 - num2 - num3;
      break;

    case '*':
      cout << num1 << " * " << num2 << " * " << num3 << " = " << num1 * num2 * num3;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
 
    	}
	}
	else
	{
		cout<<"Enter the correct value"<<endl;
	}
	cout<<"\n\n Do you want to continue [y/n]"<<endl;
	cin>>cont;
	if(cont=='y')
	{
		calculator();
	}
	else
	{
		exit(0);
	}
}

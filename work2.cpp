#include <iostream>
#include <string>
using namespace std;
void main()
{
	string Firstname,Lastname ;
	int Salary,Sale,Commision,Total;

	cout<<"****Homework 2************"<<endl;
	cout<<"Enter Name               :";
	cin >> Firstname >> Lastname;
	cout<<"Enter Salary             :";
	cin >> Salary    ;	
	cout<<"Enter Sale               :";
	cin >> Sale      ;
	cout<<"Enter Commision Percent  :";
	cin >> Commision ;
	Total =(Sale*Commision/100)+Salary;
	cout<<"--------output-----------------"<<endl;
	cout<<"Your name     ="<<Firstname<<" "<<Lastname<<endl;
	cout<<"Total Revenue ="<<Total<<endl;
	cout<<"-------------------------------"<<endl;
	//Jitkawee Ruamrattanasin Sec B Num.1
}

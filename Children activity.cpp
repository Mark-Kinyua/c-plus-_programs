#include <iostream>
using namespace std;
int main()
{
	int age;
	char gender;
	cout<<"Enter age";
	cin>>age;
	cout<<"Enter gender M or F";
	cin>>gender;
	if(age<=2)
		cout<<"Should be in nursery";
	else if(age<5)
	{if(gender=='M')
	cout<<"Should be playing computer games";
	else cout<<"Should be in bouncing castle";}
	else cout<<"Invalid age";
	system("pause");
	return 0;
}
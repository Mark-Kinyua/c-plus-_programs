#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input number";
	cin>>num;
	if (num>14&&num<72||num>103)
		cout<<"Good";
	else cout<<"Bad";
	system ("pause");
	return 0;
}
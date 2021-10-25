#include <iostream>
using namespace std;
int main()
{
	int gpa;
	cout<<"Input gpa";
	cin>>gpa;
	if (gpa>=3.5)
		cout<<"Theyve made it to the Deans list";
	else if(gpa>=2.0)
		cout<<"The gpa is ok";
	else cout<<"See the course administrator";
	system ("pause");
	return 0;
}
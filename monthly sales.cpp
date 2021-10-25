#include <iostream>
using namespace std;
int main()
{
int monthly_sales,commission;
cout<<"Input monthly sales";
cin>>monthly_sales;
if(monthly_sales<=80000)
	commission=monthly_sales*0.02;
else if(monthly_sales<=120000)
	commission=0.05*monthly_sales;
else commission=monthly_sales*0.1;
cout<<commission;
system("pause");
return 0;
}
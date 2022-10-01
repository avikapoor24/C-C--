//Q.4] Given that Sales= $95000, Taxes charged are State tax= 4% and Country tax= 2%. Now find the taxes to be charged from the given sales.
#include<iostream>
using namespace std;

int main()
{
    int Sales = 95000;
    double StateTaxRate = 0.04, CountryTaxRate = 0.02;
    double StateTax = Sales * StateTaxRate, CountryTax = Sales * CountryTaxRate;

    cout<<"Total Sales= $"<<Sales<<endl;
    cout << "List of taxes to be charged,\n"
         << "Tax charged by State= $" << StateTax << endl
         << "Tax charged by Country= $" << CountryTax << endl
         << "total tax= $"<< StateTax + CountryTax<<endl;
    return 0;
} 
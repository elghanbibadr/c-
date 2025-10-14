#include <iostream>
using namespace std;

// county tax exercise EX 2

int main()
{
    double sales = 95000;
    cout << "sales $ :" << sales << endl;

    const double stateTaxRate = .04;
    cout << "state tax rate :" << stateTaxRate << endl;

    const double countyTaxRate = .02;
    cout << "county tax rate :" << countyTaxRate << endl;

    return 0;
}

// EX 1
// int main()
// {

//     double x=10 ;
//     int y=5;

//     double z= (x+10) / (3*y) ;

//     std::cout << z;

//     return 0;
// }
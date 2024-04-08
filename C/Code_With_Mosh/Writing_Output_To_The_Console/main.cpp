#include <iostream>
using namespace std;

/*
 * Sales = 95,000$
 * State tax = 4%
 * County tax = 2%;
 */

int main() {
    int x = 10;
    int y = 20;
    cout << "x: " << x << endl
         << "y: " << y << endl;

    double sales = 95000;
    cout << "Sale: " << sales << "$" << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "State tax: " << stateTax << "$" << endl;

    const double countyTaxRate = .02;
    double countyTax = sales * countyTaxRate;
    cout << "County tax: " << countyTax << "$" << endl;

    double totalTax = stateTax + countyTax;
    cout << "Total tax: " << totalTax << "$" << endl;

    return 0;
}

// File: NumericExpression.cpp
// Name: Curtis Mitchell
// Date: 2/2/21
// Compiler Used: MinGW-W64
// Purpose: Assignments for third lab

#include <iostream>
#include <math.h>

using namespace std;

#define prog 1

#if prog == 2
int main() {

    double investmentAmount = 0.0;
    double anualInterestRate = 0.0;
    double numYears = 0;
    double futureInvestmentValue = 0.0;

    cout << "Enter investment amount: ";
    cin >> investmentAmount;
    cout << "Enter anual interest rate in percentage: ";
    cin >> anualInterestRate;
    cout << "Enter number of years: ";
    cin >> numYears;

    futureInvestmentValue = investmentAmount * pow((1 + ((anualInterestRate / 12) / 100)), (numYears * 12));

    cout << "Accumulated value: $" << futureInvestmentValue;

    return 0;
}

#elif prog == 1
int main() {
    
    double a = 2;
    double b = 3;
    double c = 5;
    double x = 2;
    double y = 3;
    double result = 0;

    result += (3 + 4 * x) / 5;
    result -= (10 * (y - 5) * (a + b + c)) / x;
    result += 9 * ((4 / x) + ((9 + x) / y));
    
    cout << result;
    
    return 0;
}
#endif
#include <iostream>
#include <cmath>

using namespace std;

double calculateSIP(double amount, double annualInterest, int timePeriod)
{

  // number of installment paid in for-ex: 10yrs so 10*12 = 120
  int installment = timePeriod * 12;

  // monthly interest on principle amount
  double monthlyInterest = annualInterest / 12 / 100;

  // total amount returned after investment
  double matuarityAmount = 0;

  // now create a loop that will calculate maturity amount for each months compounding
  for (int i = 0; i < installment; i++)
  {

    // applyin formula for  adding all amount with monthly interest
    //(compounding )
    matuarityAmount = (matuarityAmount + amount) * (1 + monthlyInterest);
  };

  return matuarityAmount;
};

int main()
{
  double amount, annualInterest;
  int timePeriod;

  // ****************** Take inputs

  // principle amount
  cout << "Enter Amount you want to invest each month: " << endl;
  cin >> amount;

  // Rate of Interest
  cout << "Enter rate of interest you are getting in (%): " << endl;
  cin >> annualInterest;

  // Time Period for which you want to invest
  cout << "Enter Time period for you want to invest: " << endl;
  cin >> timePeriod;

  // call calculateSip
  int result = calculateSIP(amount, annualInterest, timePeriod);
  cout << "Total matuarity amount: " << result << endl;
  return 0;
}
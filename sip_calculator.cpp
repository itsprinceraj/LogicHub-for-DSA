#include <iostream>
#include <cmath>
using namespace std;

double calculateSip(int amount, int timePeriod, double interest)
{
  int totalInstallments = timePeriod * 12;      // 1 installment per month;
  double monthlyInterest = interest / 12 / 100; // interest in(%) per month;
  double matuarityAmount = 0;

  //  run a for loop on the formul of sip, which will calculate the matuarity amount and adds in it;
  for (int i = 0; i < totalInstallments; i++)
  {
    matuarityAmount = (matuarityAmount + amount) * (1 + monthlyInterest);
  }

  return matuarityAmount;
}

int main()
{
  int amount;
  int timePeriod;
  double interest;
  cout << "enter principal amount: " << endl;
  cin >> amount;
  cout << "For how much year you want to invest: " << endl;
  cin >> timePeriod;
  cout << "Enter rate of interest: " << endl;
  cin >> interest;

  double result = calculateSip(amount, timePeriod, interest);
  cout << "your matuarity amount is: " << result << endl;
}
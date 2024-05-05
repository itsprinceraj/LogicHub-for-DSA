#include <cmath>
#include <iostream>

using namespace std;

// using Division method;

int convertToDecimal(int n)
{

  int decimalVal = 0;
  int i = 0;
  int bits;

  while (n) // n !=0;
  {
    bits = n % 10;
    decimalVal += bits * pow(2, i++);
    n /= 10; // n = n/10;
  };

  return decimalVal;
};

int main()
{
  int binary;
  cout << "Enter binary value: " << endl;
  cin >> binary;
  int result1 = convertToDecimal(binary);
  cout << result1;

  return 0;
};

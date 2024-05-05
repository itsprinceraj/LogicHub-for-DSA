#include <cmath>
#include <iostream>
using namespace std;

// this is by bitwise method;

int convertUsingBitwiseMethod(int n);

// // this is By division method;

int decimalToBinary(int n) {
  int binaryNumber = 0; // it will store the current binary bits
  int i = 0;
  int bits;
  while (n > 0) {

    bits = n % 2; // stores the remainder of decimal value
    // cout << bits << endl;

    binaryNumber += bits * pow(10, i++); // extracting bits from decimal value;

    // this is how i am extracting the bits from decimal value;

    // let say our input is 7 and i want to convert it in binary,
    //     the binary value of 7 is 111;
    // so this is how its get exptracted;

    //     1 = 7%2 = 1 => 1 * 10^0 + 0 = 1;
    //     0 = 7/2 = 3 => 0 * 10^1 + 1 = 11;
    //     1 = 3%2 = 1 => 1 * 10^2 + 11 = 111;

    n = n / 2;
  }
  return binaryNumber;
}

int main() {
  int decimal;
  cout << "Enter decimal value to convert in binary: ";
  cin >> decimal;
  // int result1 = decimalToBinary(decimal);
  // cout << result1;
  int result2 = convertUsingBitwiseMethod(decimal);
  cout << result2;

  return 0;
}

// Using For loop ;

// int convertDecimalToBinary(int n) {
//   int binaryVal = 0;
//   int i = 0;

//   for (; n > 0; n = n / 2) {
//     int bits = n % 2;
//     // cout << bits << endl;
//     binaryVal += bits * pow(10, i++);
//   };
//   return binaryVal;
// };

// int main() {

//   int decimal;
//   cout << "Enter Decimal Value: " << endl;
//   cin >> decimal;
//   int result = convertDecimalToBinary(decimal);
//   cout << result;

//   return 0;
// }

// this is by bitwise method;

int convertUsingBitwiseMethod(int n) {

  int i = 0;
  int binaryNum = 0;
  int bits;
  for (; n > 0; n = n >> 1) {
    bits = (n & 1);
    binaryNum += bits * pow(10, i++);
  };
  return binaryNum;
};

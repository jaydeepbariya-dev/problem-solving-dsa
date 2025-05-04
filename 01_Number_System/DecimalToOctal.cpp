#include <iostream>
using namespace std;

int decimalToOctal(int decimal){
  int octal = 0;
  int base = 1;
  
  while(decimal > 0){
    int digit = decimal % 8;
    octal += digit * base; 
    base *= 10; 
    decimal /= 8; 
  }
  
  return octal;
}

int main() 
{
    int decimal;
    cout << "Enter Decimal Number" << endl;
    cin >> decimal;
    
    cout << "Octal for " << decimal << " is : "<< decimalToOctal(decimal) << endl;
    return 0;
}

#include <iostream>
using namespace std;


int octalToDecimal(int octal){
  int decimal = 0;
  int base = 1;
  
  while(octal != 0){
    int digit = octal % 10;
    decimal = digit * base + decimal;
    base *= 8; 
    octal /= 10; 
  }
  
  return decimal;
}

int main() 
{
    int octal;
    cout << "Enter Octal Number" << endl;
    cin >> octal;
    
    cout << "Decimal for " <<  octal << " is : "<< octalToDecimal(octal) << endl;
    return 0;
}

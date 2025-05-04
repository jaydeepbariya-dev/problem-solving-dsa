#include <iostream>
using namespace std;


int binaryToDecimal(int binary){
  int decimal = 0;
  int base = 1;
  
  while(binary != 0){
    int digit = binary&1;
    decimal = digit * base + decimal;
    base *= 2; 
    binary /= 10; 
  }
  
  return decimal;
}

int main() 
{
    int binary;
    cout << "Enter Binary Number" << endl;
    cin >> binary;
    
    cout << "Decimal for " << binary << " is : "<< binaryToDecimal(binary) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int decimalToBinary(int decimal){
  int base = 1;
  int ans = 0;
  
  while(decimal != 0){
    int digit = decimal % 2;
    ans = digit*base + ans;
    base = base * 10;
    decimal = decimal / 2;  
  }
  
  return ans;
}

int main() 
{
    int decimal;
    cout << "Enter Decimal Number" << endl;
    cin >> decimal;
    
    cout << "Binary for " << decimal << " is : "<< decimalToBinary(decimal) << endl;
    return 0;
}

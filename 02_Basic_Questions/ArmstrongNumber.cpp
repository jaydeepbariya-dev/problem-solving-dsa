#include <iostream>
#include<cmath>

using namespace std;

bool isArmstrong(int n){
  int num1 = n;
  int num2 = n;
  int digitCount = 0;
  int powerSum = 0;
  
  while(num1 != 0){
    int digit = num1 % 10;
    num1 /= 10;
    digitCount++;
  }
  
  while(num2 != 0){
    int digit = num2 % 10;
    powerSum += pow(digit, digitCount);
    num2 /= 10;
  }
  
  return (powerSum == n) ? true : false;
}

int main() 
{
    int n;
    cout << "Enter Number "<< endl;
    cin >> n;
    
    if(isArmstrong(n)){
      cout << n << " is a armstrong number " << endl;
    } 
    else{
      cout << n << " is not a armstrong number " << endl;
    }
    return 0;
}

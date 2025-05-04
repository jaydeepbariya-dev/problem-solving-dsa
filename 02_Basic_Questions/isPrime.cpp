#include <iostream>
using namespace std;

bool isPrime(int n){
  int count = 0;
  
  for(int i = 1; i <= n; i++){
    if(n % i == 0) count++;
    
    if(count > 2) return false;
  }
  
  return true;
}

int main() 
{
    int n;
    cout << "Enter Number "<< endl;
    cin >> n;
    
    if(isPrime(n)){
      cout << n << " is a prime number " << endl;
    } 
    else{
      cout << n << " is not a prime number " << endl;
    }
    return 0;
}

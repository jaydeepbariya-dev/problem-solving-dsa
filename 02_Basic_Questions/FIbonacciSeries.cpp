#include <iostream>
using namespace std;

int fibTerm(int n){
  int term = 0;
  
  if(n == 1) return 0;
  if(n == 2) return 1;
  
  int firstTerm = 0, secondTerm = 1;
  
  for(int i = 3; i <= n; i++){
    term = firstTerm + secondTerm;
    firstTerm = secondTerm;
    secondTerm = term;
  }
  
  return term;
}

int main() 
{
    int n;
    cout << "Enter Number "<< endl;
    cin >> n;
    
    cout << n << "th term of fib series is: "<< fibTerm(n) << endl;
    return 0;
}

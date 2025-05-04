#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;
    cin >> rows >> cols;
    
    // 1. Right Handed Triangle
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= i; j++){
        cout << " * ";
      }
      cout << endl;
    }
    
    // 2. Ascending Number Triangle
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= i; j++){
        cout << " " << j << " ";
      }
      cout << endl;
    }
    
    // 3. Row Number Triangle
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= i; j++){
        cout << " " << i << " ";
      }
      cout << endl;
    }
    
    // 4. Row Reverse Number Triangle
    for(int i = 1; i <= rows; i++){
      for(int j = i; j >= 1; j--){
        cout << " " << j << " ";
      }
      cout << endl;
    }
    
    // 5. Row Ascending Alphabet Triangle
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= i; j++){
        cout << " " << (char)(j+96) << " ";
      }
      cout << endl;
    }
    
    // 6. Inverted Right Star Triangle
    for(int i = 1; i <= rows; i++){
      for(int j = (cols - i + 1); j >= 1; j--){
        cout << " * ";
      }
      cout << endl;
    }
    
    return 0;
}

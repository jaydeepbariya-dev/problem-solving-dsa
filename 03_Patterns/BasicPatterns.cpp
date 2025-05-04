#include <iostream>
using namespace std;

int main() 
{
    int rows, cols; 
    cout << "Enter Rows & Cols " << endl;
    cin >> rows >> cols;
    
    // 1. Rectangle of Stars
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= cols; j++){
        cout << " * ";
      }
      cout << endl;
    }
    
    // 2. Rectangle of 10
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= cols; j++){
        cout << " 10 ";
      }
      cout << endl;
    }
    
    // 3. Row Number in Each Row
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= cols; j++){
        cout << " "<< i << " ";
      }
      cout << endl;
    }
    
    // 4. Col Number in Each Col
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= cols; j++){
        cout << " "<< j << " ";
      }
      cout << endl;
    }
    
    // 5. Descending Number Pattern
    for(int i = 1; i <= rows; i++){
      for(int j = cols; j >= 1; j--){
        cout << " "<< j << " ";
      }
      cout << endl;
    }
    
    // 6. Ascending Square Number Pattern
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= cols; j++){
        cout << " "<< j*j << " ";
      }
      cout << endl;
    }
    
    // 7. Row Alphabet Pattern
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= cols; j++){
        cout << " "<< (char)(i + 96) << " ";
      }
      cout << endl;
    }
    
    // 8. Ascending Alphabet Pattern
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= cols; j++){
        cout << " "<< (char)(j + 96) << " ";
      }
      cout << endl;
    }
    
    // 9. Number Sequence Pattern
    int count = 1;
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= cols; j++){
        cout << " "<< count++ << " ";
      }
      cout << endl;
    }
    
    return 0;
}

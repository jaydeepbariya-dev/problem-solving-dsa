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

    //7. Left Side Triangle
    for(int i = 1; i <= rows; i++){
      // Spaces
      for(int j = 1; j <= (rows-i); j++){
        cout << "   ";
      }
      
      // Stars
      for(int j = 1; j <= i; j++){
        cout << " * ";
      }
      
      cout << endl;
    }
    
    //8. Row Number Triangle
    for(int i = 1; i <= rows; i++){
      // Spaces
      for(int j = 1; j <= (rows-i); j++){
        cout << "   ";
      }
      
      // Stars
      for(int j = 1; j <= i; j++){
        cout << " " << i << " ";
      }
      
      cout << endl;
    }
    
    //9. Row Sequence Triangle
    for(int i = 1; i <= rows; i++){
      // Spaces
      for(int j = 1; j <= (rows-i); j++){
        cout << "   ";
      }
      
      // Stars
      for(int j = 1; j <= i; j++){
        cout << " " << j << " ";
      }
      
      cout << endl;
    }
    
    
    //10. Row Alphabet Sequence Triangle
    for(int i = 1; i <= rows; i++){
      // Spaces
      for(int j = 1; j <= (rows-i); j++){
        cout << "   ";
      }
      
      // Stars
      for(int j = 1; j <= i; j++){
        cout << " " << (char)(j+64) << " ";
      }
      
      cout << endl;
    }
    
    //11. Row Number Descending Triangle
    for(int i = 1; i <= rows; i++){
      // Spaces
      for(int j = 1; j <= (rows-i); j++){
        cout << "   ";
      }
      
      // Stars
      for(int j = i; j >= 1; j--){
        cout << " " << j << " ";
      }
      
      cout << endl;
    }
    
    return 0;
}

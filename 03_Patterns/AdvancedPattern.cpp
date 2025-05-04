#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    // 1. Pyramid Pattern
    for(int i = 1; i <= n; i++){
      // Spaces
      for(int j = 1; j <= (n-i); j++){
        cout << "   ";
      }
      
      // Stars - Left
      for(int k = 1; k <= i; k++){
        cout << " * ";
      }
      
      // Stars - Right
      for(int k = 1; k < i; k++){
        cout << " * ";
      }
      
      cout << endl;
    }
    
    // 2. Number Pyramid Pattern
    for(int i = 1; i <= n; i++){
      // Spaces
      for(int j = 1; j <= (n-i); j++){
        cout << "   ";
      }
      
      // Numbers - Left
      for(int k = 1; k <= i; k++){
        cout << " " << k << " ";
      }
      
      // Numbers - Right
      for(int l = i-1; l >= 1; l--){
        cout << " " << l << " ";
      }
      
      cout << endl;
    }
    
    // 3. Inverted Pyramid Pattern
    for(int i = 1; i <= n; i++){
      // Spaces
      for(int j = 2; j <= i; j++){
        cout << "   ";
      }
      
      // Stars - Left
      for(int k = 1; k <= n-i+1; k++){
        cout << " * ";
      }
      
      // Stars - Right
      for(int k = n-i; k >= 1; k--){
        cout << " * ";
      }

      cout << endl;
    }
    
    // 4. Hollow Diamond Pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " * ";
        for (int j = 0; j < 2 * i; j++)
            cout << "   ";
        for (int j = 0; j < n - i; j++)
            cout << " * ";
        cout << endl;
    }

    // Bottom half
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << " * ";
        for (int j = 0; j < 2 * (n - i - 1); j++)
            cout << "   ";
        for (int j = 0; j <= i; j++)
            cout << " * ";
        cout << endl;
    }
    
    // 5. Butterfly Pattern
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++)
            cout << " * ";
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << "   ";
        // Right stars
        for (int j = 1; j <= i; j++)
            cout << " * ";
        cout << endl;
    }

    // Bottom half
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++)
            cout << " * ";
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << "   ";
        // Right stars
        for (int j = 1; j <= i; j++)
            cout << " * ";
        cout << endl;
    }
    return 0;
}

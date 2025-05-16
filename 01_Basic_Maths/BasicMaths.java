import java.util.*;

public class BasicMaths {
  
    public static void convertDecimalToAnyBase(int decimal, int base){
      int ans = 0;
      int power = 0;
      
      while(decimal > 0){
        int rem = decimal % base;
        decimal /= base;
        ans += rem * power(10, power); 
        power++;
      }
      
      System.out.println(ans);
    }
    
    public static void convertAnyBaseToDecimal(int num, int base){
      int ans = 0;
      int power = 0;
      
      while(num > 0){
        int rem = num % 10;
        num /= 10;
        ans += rem*power(base, power); 
        power++;
      }
      
      System.out.println(ans);
    }
    
    public static void findOddEven(int num){
      if(num%2 == 0){
        System.out.println("Even");
      }
      else{
        System.out.println("Odd");
      }
    }
    
    public static double power(int base, int power){
      double ans = 1;
      for(int i = 1; i <= power; i++){
        ans = ans * base;
      }
      return ans;
    }
    
    public static void reverseNum(int num){
      int ans = 0;

      while(num != 0){
        int digit = num % 10;
        ans = ans * 10 + digit;
        num = num / 10;
      }
      
      System.out.println(ans);
    }
    
    public static double fastExponentiation(int num, int power){
      double ans = 1;
      
      while(num > 0){
        if(power % 2 != 0){
          ans = ans * num;
        }  
        power /= 2;
        num = num * num;
      }
      
      System.out.println(ans);
      
      return ans;
    }
    public static void main(String[] args) {
     convertDecimalToAnyBase(9, 2);
     convertAnyBaseToDecimal(1011, 2);
     findOddEven(23);
     reverseNum(123);
     fastExponentiation(3,4);
     
  }
}

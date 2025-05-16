import java.util.*;

public class Main {
    
    public static int countDigits(int num){
      int count = 0;
      
      while(num > 0){
        num = num/10;
        count++;
      }
      
      System.out.println(count);
      
      return count;
    }
    
    public static int countDigitsByLog(int num){
        int count = (int)(Math.log(num) / Math.log(10)) + 1;
        // int count = (int)Math.log10(num) + 1;
        System.out.println(count);
        return count;
    }
    
    public static void armstrongNumber(int num){
        int res = 0;
        int copy = num;
        while (num>0){
            int digit = num%10;
            res = res + (int)Math.pow(digit,3);
            num /= 10;
        }
           System.out.println(res==copy);

    }
    
    public static void printAllDivisors(int num){
      int sqrt = (int)Math.sqrt(num);
      for(int i = 1; i <= sqrt; i++){
        if(num % i == 0) System.out.print(i + " ");
        int otherNumber = num / i;
        if(otherNumber != i) System.out.print(otherNumber + " ");
      }
      System.out.println();
    }
    
    public static void primeNumbers(int num){
        int counter = 2;
        int sqroot = (int)Math.sqrt(num);
        while(counter <= sqroot){
            if(num%counter == 0){
                System.out.println(num + " is not a prime number ");
                return;
            }
            counter++;
        }
        System.out.println(num + " is a prime number ");
    }
    
    public static void sieveAlgorithm(int num){
        boolean arr[] = new boolean[num+1];
        Arrays.fill(arr, true);
        int counter = 2;
        while (counter<=num){
            if(arr[counter] == true){
                for(int factor = counter+counter; factor<=num; factor+=counter){
                    arr[factor] = false;
                }
            }
            counter++;
        }

        for(int i=2;i<=num;i++){
            System.out.println(i +" : "+ arr[i]);
        }
    }
    
    public static double newtonRaphsonSqRoot(int num){
        double tol = 0.0001;
        double root;
        double X = num;
        while(true){
            root = 0.5 * (X + (num/X));
            double ans = X - root;
            if(ans < tol){
                break;
            }
            X = root;
        }
        return root;
    }
    
    public static void GCD(int num1, int num2){
        int min = (num1<=num2)?num1:num2;
        while (min > 0 ){
            if(num1%min == 0 && num2%min==0){
                System.out.println("GCD is:"+ min);
                return;
            }
            min--;
        }
        int max = (num1<=num2)?num2:num1;
        System.out.println("GCD is:"+ max);
    }

    public static void euclideanGcd(int num1, int num2){
        while (num1!=0 && num2!=0){
            if(num1>num2){
                num1 -=num2;
            }
            else {
                num2 -= num1;
            }
        }
        int res = num1;
        if(num1 == 0){
            res = num2;
        }
        System.out.println("GCD is "+ res);
    }

    static void factorial(int num){
        double res = 1;
        while (num>1){
            res *= num;
            num--;
        }
        System.out.println(res);
    }
    
    public static void main(String[] args) {
      countDigits(123);
      countDigitsByLog(123);
      armstrongNumber(121);
      printAllDivisors(20);
      primeNumbers(20);
      sieveAlgorithm(15);
      GCD(24,36);
      euclideanGcd(24,36);
      factorial(5);
  }
}

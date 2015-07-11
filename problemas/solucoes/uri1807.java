/*
* URI 1807 - Triângulo Trinomial, a Vingança
* ---
* Compile: javac uri1807.java
* Execute: java uri1807
*/

import java.util.*;
 
public class uri1807 {
    static long mod = 2147483647;
     
    public static long exp(long x, long n) {
        long result = 1;
 
        while (n > 0) {
            if (n % 2 == 1) {
                result = (result * x) % mod;
                n--;
            }
            x = (x * x) % mod; 
            n /= 2;
        }
         
        return result % mod;
    }
 
    public static void main(String[] args) {
        long n = 0;
        Scanner IN = new Scanner(System.in);
 
        n = IN.nextLong();
        System.out.println(exp(3, n));
    }
 
}
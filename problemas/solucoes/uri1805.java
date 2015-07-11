/*
* URI 1805 - Soma Natural
* ---
* Compile: javac uri1805.java
* Execute: java uri1805
*/

import java.util.*;

public class uri1805 {
 
    public static long soma1aten (long n) {
        return (n * (n+1)) / 2;
    }
     
    public static void main(String[] args) {
        long a=0, b=0, r=0;
         
        Scanner IN = new Scanner(System.in);
         
        a = IN.nextInt();
        b = IN.nextInt();
         
        r = soma1aten(b) - soma1aten (a-1);
        System.out.println(r);
        
    }
 
}
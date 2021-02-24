import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    
    public static void main(String args[] ) throws IOException{

       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       if(n%2==1)
       {
           System.out.println("Weird");
       }
       if(n%2==0)
       {
           if(n>=2 && n<=5)
           {
               System.out.println("Not Weird");
           }
           else if(n>=6 && n<=20)
           {
               System.out.println("Weird");
           }
           else if(n>20)
           {
               System.out.println("Not Weird");
           }
       }
       
    }
}

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    public static int factorial(int n){
        
        if(n>1)
        {
            return n*factorial(n - 1);
        }
        else
        {
            return 1;
        }
        
    }

    public static void main(String[] args) throws IOException {
        
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));

        int n=Integer.parseInt(br.readLine());
        System.out.println(factorial(n));
    }
}

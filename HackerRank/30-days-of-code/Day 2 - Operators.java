import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
       Scanner sc=new Scanner(System.in);
       double mealCost = sc.nextDouble();
       int tipPercent = sc.nextInt();
       int taxPercent = sc.nextInt();
       float total= (float)mealCost + (float)mealCost*((float)tipPercent/100) + (float)mealCost*((float)taxPercent/100);
       System.out.println(Math.round(total));


    }

}

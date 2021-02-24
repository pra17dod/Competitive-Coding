import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
         Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       for(int i=0;i<n;i++)
       {
           String s=sc.next();
           String s1="";
           String s2="";
           for(int j=0;j<s.length();j++)
           {
               if(j%2==0)
               {
                   s1+=s.charAt(j);
               }
               else
               {
                   s2+=s.charAt(j);
               }
           }
           System.out.println(s1+" "+s2);
       }

    }
}

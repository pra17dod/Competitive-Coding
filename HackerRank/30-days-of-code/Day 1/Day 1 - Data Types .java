import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);
        int in=scan.nextInt();
        double db=scan.nextDouble();
        String next=scan.nextLine();
        String str=scan.nextLine();
        System.out.println(in+i);
        System.out.println(db+d);
        System.out.println(s+str);
        scan.close();
    }
}
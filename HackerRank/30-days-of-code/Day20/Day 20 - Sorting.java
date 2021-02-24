import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static int minSwaps(int[] a, int n)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    count++;
                }
            }
        }
        return count;
}

    public static void main(String[] args) {
        
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       int[] arr=new int[n];
       for(int i=0;i<n;i++)
       {
           arr[i]=sc.nextInt();
       }
       System.out.println("Array is sorted in "+ minSwaps(arr,n)+" swaps.");
       System.out.println("First Element: "+arr[0]);
       System.out.println("Last Element: "+arr[n-1]);
    }
}

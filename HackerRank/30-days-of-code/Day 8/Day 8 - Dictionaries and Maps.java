import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        
        Scanner sc = new Scanner(System.in);
       Map<String,Integer> phoneBook = new HashMap<String,Integer>();
       int n = sc.nextInt();
       for(int i = 0; i < n; i++){
           String name = sc.next();
           int phone = sc.nextInt();
           phoneBook.put(name, phone);
       }
       while(sc.hasNext()){
           String s = sc.next();
           Integer phoneNumber = phoneBook.get(s);
           System.out.println((phoneNumber != null) ? s + "=" + phoneNumber : "Not found");
       }
    }
}

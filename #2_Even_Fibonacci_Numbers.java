import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long t = in.nextLong();
        for(long a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            long a=1;
            long b=2;
            long sum=0;
            if(b<n)
            {
                sum=2;
                long c=a+b;
                while (c<n)
                {
                    
                    
                    a=b;
                    b=c;
                    if(c%2==0)
                    sum=sum+c;
                    c=a+b;

                }
                System.out.println(sum);
            }
            else
            {
                System.out.println(0);
            }
        }
    }
}

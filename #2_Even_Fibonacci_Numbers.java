/*


Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with  and , the first  terms will be:

By considering the terms in the Fibonacci sequence whose values do not exceed , find the sum of the even-valued terms.

Input Format

First line contains  that denotes the number of test cases. This is followed by  lines, each containing an integer, .

Constraints

Output Format

Print the required answer for each test case.

Sample Input 0

2
10
100
Sample Output 0

10
44
Explanation 0

For , we have , sum is .
For , we have , sum is .


*/








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



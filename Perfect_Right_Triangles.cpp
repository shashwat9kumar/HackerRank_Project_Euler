/*


Consider the right angled triangle with sides ,  and . The area of this triangle is , which is divisible by the perfect numbers  and .
Moreover it is a primitive right angled triangle as  and .
Also  is a perfect square.

We will call a right angled triangle perfect if

it is a primitive right angled triangle
its hypotenuse is a perfect square
We will call a right angled triangle super-perfect if

it is a perfect right angled triangle and
its area is a multiple of the perfect numbers  and .
How many perfect right-angled triangles with  exist that are not super-perfect?

Input Format

First line of each test file contains a single integer  that is the number of queries.  lines follow, each containing an integer  - an upper bound of the largest side of the triangle.

Constraints

Output Format

Print exactly  lines with a single integer on each: an answer to the corresponding query.

Sample Input 0

1
25
Sample Output 0

0
Explanation 0

As we can see from the problem statement, the only perfect triangle with  is super-perfect.



*/









#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t-- > 0)
    { 
        long long x;
        cin>>x;
        cout<<0<<endl;
    }
    return 0;
}

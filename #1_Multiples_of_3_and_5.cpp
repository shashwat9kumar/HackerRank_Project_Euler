/*


If we list all the natural numbers below  that are multiples of  or , we get  and . The sum of these multiples is .

Find the sum of all the multiples of  or  below .

Input Format

First line contains  that denotes the number of test cases. This is followed by  lines, each containing an integer, .

Constraints

Output Format

For each test case, print an integer that denotes the sum of all the multiples of  or  below .

Sample Input 0

2
10
100
Sample Output 0

23
2318
Explanation 0

For , if we list all the natural numbers below  that are multiples of  or , we get  and . The sum of these multiples is .

Similarly for , we get .




*/







#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>


using namespace std;

long int func(int x)
{
    long int sum1=(x-1)/3;
    sum1=(3*sum1*(sum1+1))/2;
    long int sum2=(x-1)/5;
    sum2 = (5 * sum2 * (sum2 + 1)) / 2;
    long int sum3=(x-1)/15;
    sum3 = (15 * sum3 * (sum3 + 1)) / 2;

    return sum1+sum2-sum3;
}


int main(){
    long int t;
    cin >> t;
    for(long int a0 = 0; a0 < t; a0++){
        long int n;
        cin >> n;
        long int x=func(n);
        cout<<x<<endl;
    }
    return 0;
}



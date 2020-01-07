/*


The sum of the squares of the first ten natural numbers is, . The square of the sum of the first ten natural numbers is, . Hence the absolute difference between the sum of the squares of the first ten natural numbers and the square of the sum is .

Find the absolute difference between the sum of the squares of the first  natural numbers and the square of the sum.

Input Format

First line contains  that denotes the number of test cases. This is followed by  lines, each containing an integer, .

Constraints

Output Format

Print the required answer for each test case.
Sample Output 0

22
2640
Explanation 0

For  , 
For , 



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




int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long int s1=(n*(n+1))/2;
        s1=s1*s1;
        long int s2;
        s2=n*(n+1);
        int a=2*n+1;
        s2=s2*a;
        s2=s2/6;
        cout<<s1-s2<<endl;
    }
    return 0;
}





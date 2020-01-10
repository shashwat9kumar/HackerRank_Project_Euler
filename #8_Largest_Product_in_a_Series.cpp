/*



Find the greatest product of  consecutive digits in the  digit number.

Input Format

First line contains  that denotes the number of test cases.
First line of each test case will contain two integers  & .
Second line of each test case will contain a  digit integer.
Constraints

Output Format

Print the required answer for each test case.
Output Format

Print the required answer for each test case.

Sample Input 0

2
10 5
3675356291
10 5
2709360626
Sample Output 0

3150
0
Explanation 0

For  and selecting  consequetive digits, we have , , , ,  and . Where  gives maximum product as 
For ,  lies in all selection of  consequetive digits hence maximum product remains 



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
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        int maxprod=0;
        for(int i=0;i<=n-k;i++)
        {
                        int prod=1;
            string str=num.substr(i,k);
            int number=stoi(str);
            while(number>0)
            {
                int d=number%10;
                prod*=d;
                number/=10;
            }
            if(prod>maxprod)
            {
                maxprod=prod;
            }
                    }
        cout<<maxprod<<endl;
    }
    return 0;
}



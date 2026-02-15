#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


   class Solution {
public:
    string addBinary(string a, string b) {
      int i = a.size() - 1;
      int j = b.size() - 1;
      int carry = 0;
      string res;

      while(i>=0 || j>=0 || carry > 0){
        int bit_a = (i >= 0) ? (a[i] - '0') : 0;
        int bit_b = (j >= 0) ? (b[j] - '0') : 0;
        int sum = bit_a + bit_b + carry;
        carry = sum / 2;
        res.push_back((sum % 2) + '0');
        i--;
        j--;
      }  

      reverse(res.begin(),res.end());
      return res;
    }
};
int main(void) {
    Solution sol;
    string a, b;
    cout << "Enter first binary number: ";
    cin >> a;
    cout << "Enter second binary number: ";
    cin >> b;
    string result = sol.addBinary(a, b);
    cout << "Sum of " << a << " and " << b << " is: " << result << endl;
   return 0;
}
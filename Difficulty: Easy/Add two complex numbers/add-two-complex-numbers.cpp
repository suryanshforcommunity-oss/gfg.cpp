/*Structure of a Complex Number
class Complex {
  public:
    int real;
    int img;
};
*/

class Solution {
  public:
    Complex add(Complex c1, Complex c2) {
        // code here
        Complex ans;
        ans.real= c1.real+c2.real;
        ans.img=c1.img+c2.img;
        return ans;
    }
};

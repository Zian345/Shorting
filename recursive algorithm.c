//Implement a recursive algorithm to find the m^n.
//m = 5. n= 4
//ans: 5*5*5*5
//m*n

#include <stdio.h>
int power(int m, int n) {
 if (n == 0) {
 return 1;
 } else {
 return m * power(m, n - 1);
 }
}
int main() {
 int m = 5;
 int n = 4;
printf("Power of %d raised to %d is %d\n", m, n, power(m, n));
 return 0;
}

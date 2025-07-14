#include <stdio.h>

int main() {
    int a=5;
    int b=3;
    int c=a+b;
    printf("the value of a is %d,the value of b is %d,and the sum is %d\n",a,b,c);
    //modulus operator is used to find the remainder of a division operation
    printf("the remainder when a is divided by b is %d\n",a%b);
    return 0;
//this does not work for exponential operations, for that we need to use the pow function from the math library
//int d = a^b; // this will not work as expected.
}
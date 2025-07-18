#include <stdio.h>

int main() {
    int a = 1;
    //int a = 0;
    int b = 1;
    //int b = 0;
    printf("the value of a and b is %d\n",a&&b);
    printf("the value of a or b is %d\n",a||b);
    printf("the value of not(a) is %d\n",!a);
    
    if (a && b) {
        printf("Both a and b are true.\n");
    }
    return 0;
}
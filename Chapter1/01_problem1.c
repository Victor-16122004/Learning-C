#include <stdio.h>

int main() {
    //int length = 3;
    //int breadth = 6;
    int Length,Breadth;
    printf("Enter Length\n");
    scanf("%d", &Length);

    printf("Enter Breadth\n");
    scanf("%d", &Breadth);
    printf("The area of the rectangle is %d",Length*Breadth);
    return 0;
}
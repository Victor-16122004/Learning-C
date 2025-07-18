//Write a C program that takes a student's marks and prints their grade based on this scale:
//- 90 - 100 → A
//- 80 - 90 → B
//- 70 - 80 → C
//- 60 - 70 → D
//- 50 - 60 → E
//- Below 50 → F
#include <stdio.h>

int main() {
    int marks;

    printf("Enter student's marks: ");
    scanf("%d",&marks);
    if (marks>=90 && marks<=100)
    {
        printf("grade a\n",marks);
    }
    if (marks>=80 && marks<=90)
    {
        printf("grade b\n",marks);
    }
    if (marks>=70 && marks<=80)
    {
        printf("grade c\n",marks);
    }
    if (marks>=60 && marks<=70)
    {
        printf("grade d\n",marks);
    }
    if (marks>=60 && marks<=50)
    {
        printf("grade e\n",marks);
    }if(marks<=50)
    {
        printf("grade fail\n",marks);
    }
    
    return 0;
}

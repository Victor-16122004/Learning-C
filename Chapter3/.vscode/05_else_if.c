#include <stdio.h>

int main() {
    //int age =45;
    //int age = 18;
    int age = 16;
    if (age>60){
        printf("you can drive and you are a senior citezen");
    }
    else if(age==18) {
        printf("you can drive but you need to get a license first");
    }
    else if(age>40){
        printf("you can drive and you are elder");
    } 
    else {
        printf("you cannot drive");
    }
    return 0;
}
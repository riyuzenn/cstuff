/*
Simple hello world program with some other stuff.
*/

#include <stdio.h>

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int validate_age(int age) {
    if (age >= 18) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(int argc, char** argv) {
    char name[10];
    int age;
    
    printf("Hello World\n");
    
    printf("What is your name?: ");
    scanf("%s", &name);
    
    printf("What is your age?: ");
    scanf("%d", &age);
    greet(name);

    if (validate_age(age)) {
        printf("Legal age");
    }
    else {
        printf("Minor age");
    }
    
    return 0;
}

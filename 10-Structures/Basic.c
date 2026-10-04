#include <stdio.h>
#include <string.h>

struct id {
    int rollNumber;
    char name[15];
};

int main(void) {
    struct id s1;

    s1.rollNumber = 32;
    strcpy(s1.name, "vedant");

    printf("Name :%s\n", s1.name);
    printf("RollNumber :%d\n", s1.rollNumber);

    return 0;
}
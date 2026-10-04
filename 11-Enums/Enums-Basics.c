#include <stdio.h>
enum level {
    LOW,
    MEDIUM,
    HIGH
};

int main(){
    enum level myVar;
    myVar = LOW;
    printf("%d",myVar);
    return 0;
}
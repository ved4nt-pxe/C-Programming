#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Text2.txt", "w");
    fprintf(fptr , "sometext");
    fclose(fptr);
    return 0;
}
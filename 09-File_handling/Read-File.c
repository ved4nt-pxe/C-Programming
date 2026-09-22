
#include <stdio.h>
int main(){
    FILE *fptr;
   fptr = fopen("Text.txt", "r");
    char myString[100];

    if(fptr != NULL){
        while (fgets(myString, 100, fptr)) {
            printf("%s",myString);

        }
    }else {
        printf("this file is not obtainable :");
    }
    fclose(fptr);
}
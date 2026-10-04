#include <stdio.h>
int main(){
    int i ,x ,n;

    printf("Enter The Number Of Rows:");
    scanf("%d", &n);

    for (i=1 ; i<=5 ; i++){
        for (x=1 ; x<=i ; x++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}
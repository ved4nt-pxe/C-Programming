#include <stdio.h>
int main(){
    int i ,x ,n;
    int j = 1;

    printf("Enter The Rows For The Floyds Triangle:");
    scanf("%d", &n);

    for (i=1 ; i<=n ; i++){
        for (x=1 ; x<=i ; x++){
            printf("%d",j++);
        }
        printf("\n");

    }

return 0;
}
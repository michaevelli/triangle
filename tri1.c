//name: michael
//date: 20170303
//test cse prog

#include <stdio.h>

int main(void) {

    int length = 9+1;

    for(int i = 1; i <length; i++){
        for(int k = length - i; k > 0; k--){
            printf(" ");
        }
        for(int j = 1; j<=i; j++){
            if (j < 10){
                printf("%d", j);
            } else {
                printf("%d", j);
            }
        }
        printf("\n");
    }

    return 0;
}

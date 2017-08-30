//name: michael
//date: 20170303
//test cse prog

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int length = 20+1;

    for(int i = 1; i <length; i++){
        for(int k = 1; k < (length-i); k++){
            printf("  ");
        }
        for(int j = 1; j<=i; j++){
            int d = random()%100;
            if(d < 10){
                printf("0");
            }
            printf("%d  ", d);

        }
        printf("\n");
    }

    return 0;
}

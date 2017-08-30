//name: michael
//date: 20170303
//print pascal triangle

#include <stdio.h>

//#define LINES 20

//factorial function
double factorial(double k){
    if ( k <= 0 ){
        return 1;
    }
    return(k * factorial(k - 1));
}

//combination function
double c(double n, double r){
    double combination = factorial(n)/(factorial(r)*factorial(n-r));
    return combination;
}

//find maximum amount of digit
int digit(int h){
    int n = h, count = 0;
    while(n != 0) {
        n /= 10;
        ++count;
    }
    return count;
}

void main() {
    int LINES;
    scanf("%d", &LINES);


    int length = LINES+1;
    double max = c(length-2, ((length-1)/2));
    int dig = digit(max);

    //goes through lines of triangle
    for(int i = 1; i <length; i++){
        //inserts spaces before triangle
        for(int k = 1; k < length-(i); k++){
            //inserts correct number of spaces for size of triangle
            for(int a = 0; a < dig; a++){
                printf(" ");
            }
        }
        //prints numbers
        for(int j = 1; j<=i; j++){
            double x = c(i-1, j-1);
            //don't want spaces preceeding triangle
            if (j == 1){
                printf("%.lf", x);
            } else {
                //prints space between number
                for(int c = 0; c < dig; c++){
                    printf(" ");
                }
                //prints space preceeding number
                for(int b = digit(x); b < dig; b++){
                    printf(" ");
                }
                printf("%.lf", x);
            }
        }
        printf("\n");
    }
}

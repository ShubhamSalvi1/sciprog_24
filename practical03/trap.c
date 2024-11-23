#include<stdio.h>
#include<math.h> //include this for math library as there will be use of mathematical methods like tan and pi

int main(void){
    int N =12;

    float a = 0;
    float b = 60;
    float b_rad;
    b_rad = ((M_PI * b)/180);

    float sum = tan(a) + tan(b_rad);
    printf("The sum before loop is %f\n", sum);

    //for loop 
    int i;
    for (i=5; i<60; i=i+5){
        sum+= 2*tan(M_PI*i/180);
    }
    printf("The sum after the loop is %f\n", sum);
    sum = ((b_rad - a)/(2*N))*sum;
    printf("The final value of the sum is: %f\n", sum);
    printf("The actual value is: %f\n", logf(2));
    float abs_diff = fabs(sum-log(2));
    float rel_diff = fabs(1-(sum/logf(2)));
    printf("Absolute difference = %f\n Relative difference = %f\n", abs_diff, rel_diff);
    return 0;
}
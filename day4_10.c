#include <stdio.h>
#include <conio.h>
 
int main(){
    int base, exponent, counter, result = 1;
    printf("Enter base and exponent \n");
    scanf("%d %d", &base, &exponent);
     
    result = getPower(base, exponent);
     
    printf("%d^%d = %d", base, exponent, result);
    getch();
    return 0;
}
/*
 * Function to calculate base^exponent using recursion
 */
int getPower(int base, int exponent){
    /* Recursion termination condition,
      Anything^0 = 1
     */
    if(exponent == 0){
        return 1;
    }
    return base * getPower(base, exponent - 1);
}
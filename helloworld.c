/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include <stdio.h>
#include "pico/stdlib.h"
//if the serial monitor doesn't show anything, blindly type the first number, press enter, second number and press enter
int main() {
    stdio_init_all();
    int num1,num2,op;
    //num1=6;
    //num2=7;
    printf("Program starting\n");
    while (1) {
        printf("Enter First and Second Numbers:\n");
        scanf("%d %d",&num1,&num2);
        printf("First number is: %d\n",num1);
        printf("Second number is : %d\n",num2);
        printf("Enter operation to be performed: Addition, Difference, Multiplication, Division (1,2,3,4, 5 to exit)\n");
        op=getchar();
        if(op=='1'){
            printf("The sum of the two numbers is: %d\n",num1+num2);
        }
        else if(op=='2'){
            printf("The difference of the two numbers is: %d\n",num1-num2);
        }
        else if(op=='3'){
            printf("The multiplication of the two numbers is: %d\n",num1*num2);
        }
        else if(op=='4'){
            printf("The division of the two numbers is: %d\n",num2/num2);
        }
        else{
            printf("Exited!\n");
        }
        return 0;   
    }
}

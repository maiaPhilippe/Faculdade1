//
//  main.c
//  average2
//
//  Created by Philippe Maia on 21/04/16.
//  Copyright © 2016 Philippe Maia. All rights reserved.
//

#include <stdio.h>
int main() {
    /* code */
    float num1;
    float num2;
    float num3;
    int countpersonal;
    int count;
    float sum;
    float average;
    printf("Count? ");
    scanf("%d", &countpersonal);
    printf("Number1? ");
    scanf("%f", &num1);
    printf("Number2? ");
    scanf("%f", &num2);
    sum = num1 + num2;
    while (count < (countpersonal - 2)) {
        printf("Number? ");
        scanf("%f", &num3);
        sum = sum + num3;
        count = count + 1;
    }
    
    average = (float)(sum / countpersonal);
       printf("%f\n",sum );
    printf("%f\n",average );
    return 0;
    
}
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
    float num1, num2, num3, average, sum;
    int countpersonal, count;
    printf("Count? ");
    scanf("%d", &countpersonal);
    printf("Number1? ");
    scanf("%f", &num1);
    printf("Number2? ");
    scanf("%f", &num2);
    sum = num1 + num2;
    count = 0;
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

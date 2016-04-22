//
//  Sphere Volume Calc.c
//  Sphere Volume Calc
//
//  Created by Philippe Maia on 21/04/16.
//  Copyright © 2016 Philippe Maia. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    float volume;
    float radius;
    float pi;
    pi = M_PI;
    printf("radius value? \n");
    scanf("%f", &radius);
    volume = powf(radius, 3.0) * 4/3 * pi;
    printf("\nVolume: %0.4f m3\n", volume);
    return 0;
}
#import <stdio.h>

main () {
    int step, min, max;
    float fahrenheit;
    step = 5;
    min = -20;
    max = 150;
    printf("%s\t%s\n", "Celsius", "Fahrenheit");
    while (min <= max) {
        fahrenheit = (min * 9/5) + 32;
        printf("%d\t%3.1f\n", min, fahrenheit);
        min += step;
    }
}
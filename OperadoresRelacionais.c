#include <stdio.h>

    int main() {
        int a = 20;
        int b = 20;

        printf("a > b: %d\n", a > b);   // false (0
        printf("a < b: %d\n", a < b);   // true (1
        printf("a >= b: %d\n", a >= b); // false (0
        printf("a <= b: %d\n", a <= b); // true (1
        printf("a == b: %d\n", a == b); // false (0
        printf("a != b: %d\n", a != b); // true (1

        int x = 5;
        float y= 5.0;
        char c = 'a';

        printf("x > y: %d\n", x > y);   
        printf("x < y: %d\n", x < y);   
        printf("x >= y: %d\n", x >= y); 
        printf("x <= y: %d\n", x <= y); 
        printf("x == y: %d\n", x == y); 
        printf("x != y: %d\n", x != y); 

        printf("x >= c: %d\n", x >= c);
        printf("o valor ascii de %c é: %d\n", c, c);

        float numero1 = 10.2;
        int numero2 = 10;

        printf("numero1 > numero2: %d\n", numero1 > numero2);
        printf("numero1 < numero2: %d\n", numero1 < numero2);
        printf("numero1 >= numero2: %d\n", numero1 >= numero2);
        printf("numero1 <= numero2: %d\n", numero1 <= numero2);
        printf("numero1 == numero2: %d\n", numero1 == numero2);
        printf("numero1 != numero2: %d\n", numero1 != numero2);

        printf("numero1 > numero2: %d\n", (int)numero1 > numero2);
        printf("numero1 == numero2: %d\n", (int)numero1 == numero2);



    }
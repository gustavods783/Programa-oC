#include <stdio.h>
 
int main() {
    
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // Realiza a divisão e armazena o resultado em uma variável do tipo float

    /* o float em parenteses, força o arquivo ser salvo no modo float*/

    printf("Quociente: %.2f\n", quociente); 

    return 0;

}

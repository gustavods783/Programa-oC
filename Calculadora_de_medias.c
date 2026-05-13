#include <stdio.h>

    int main() {

        /* Fluxograma do calculo da media
        
        Coletar as notas dos alunos
        Calcular a media
        Exibir o resultado
        acima de 6 aprovado
        abaixo de 6 reprovado
        */

        int nota1, nota2, nota3;
        float media;
        
        printf("*** Calculadora de Medias ***\n");

        printf("Digite a primeira nota: ");
        scanf("%d", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%d", &nota2);
        
        printf("Digite a terceira nota: ");
        scanf("%d", &nota3);

        media = (nota1 + nota2 + nota3) / 3.0;

        printf("A media do aluno é: %.2f\n", media);
        if (media >= 6) {
            printf("Aluno aprovado!\n");
        } else {
            printf("Aluno reprovado!\n");
        }

        return 0;


    }
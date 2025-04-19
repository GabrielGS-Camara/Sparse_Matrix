#include "matrix.h"
/*
    Alunos: Gabriel Gonzaga Seabra Câmara e Pedro Paulo Moreira de Freitas
    Link do vídeo explicativo: https://drive.google.com/file/d/1eJpFOuvnijDJ9iZXjoUOolkn7Vf1QGUB/view?usp=sharing

    Trabalho AED 1:
    Desenvolver um TAD de matriz esparsa, com funções de criação, print, destruição, adição, multiplicação e transposição das mesmas aplicando listas circulares e com o uso de uma célula cabeça localizada em -1 -1.

    OBS:  Todos os requisitos das funções solicitadas foram cumpridas em relação à precisão de resultados, assim como quase todas as exceções. No entanto, foi utilizado uma segunda struct, denominada MatrixList -que aponta diretamente para a célula cabeça e armazena o tamanho denominado da matriz- e foi usada na criação de todas as matrizes e suas respectivas operações, sendo passada de parâmetro e retornada no main.
*/
int main(void)
{
    MatrixList* A = matrix_create();
    matrix_print(A);

    MatrixList* B = matrix_create();
    matrix_print(B);

    MatrixList* C = matrix_add(A, B);
    matrix_print(C);
    matrix_destroy(C);

    C = matrix_multiply(A, B);
    matrix_print(C);
    matrix_destroy(C);

    C = matrix_transpose(A);
    matrix_print(C);
    matrix_destroy(C);

    matrix_destroy(A);
    matrix_destroy(B);

    return 0;
}
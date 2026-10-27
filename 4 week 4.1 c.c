
#include <stdio.h>

int main(void)
{
    float A, B, C, D, E, F, G;
    float result1, result2, result3, result4;
    int J = 10, I = 5;

    printf("Enter A, B, C, D, E, F, G: ");

    if (scanf("%f%f%f%f%f%f%f",
              &A, &B, &C, &D, &E, &F, &G) != 7) {
        printf("Invalid input.\n");
        return 1;
    }

    result1 = A + B * C + (D + E) + (F * G);
    printf("\nA+B*C+(D+E)+F*G = %f", result1);

    result2 = A / B * C - B + A * D / 3;
    printf("\nA/B*C-B+A*D/3 = %f", result2);

    result3 = A++ + B-- - A;
    printf("\nA+++B---A = %f", result3);

    result4 = I + 1 + (I + 2);
    printf("\nIncrement example = %f", result4);

    printf("\nJ = %d", J);

    return 0;
}












    
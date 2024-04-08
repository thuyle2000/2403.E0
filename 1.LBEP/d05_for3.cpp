#include <stdio.h>
#include <stdlib.h>

int main(){
    int row, col;

    system("cls");
    printf(" >> nhap so dong: "); scanf("%d", &row);
    printf(" >> nhap so cot: "); scanf("%d", &col);

    for (int i = 0; i < row; i++)
    {
        /* for-i: dem so dong in */
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            /* for-j: dem so cot in */
            printf("* ");
        }
    }
    
}
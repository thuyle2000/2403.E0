#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");

    char kytu;
    printf(" vui long nhap 1 ky tu chu [a-z] bat ky: ");
    scanf("%c", &kytu);

    if ((kytu >= 'A' && kytu <= 'Z') || (kytu >= 'a' && kytu <= 'z'))
    {
        // user nhap ky tu chu tu A->Z hoac a->z
        switch (kytu)
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("=> %c la nguyen am ! \n", kytu);
            break;

        default:
            printf("=> %c la phu am ! \n", kytu);
            break;
        }
    }
    else{
        printf("ky tu duoc nhap ko phai la ky tu chu tu a->z !\n");
    }
}
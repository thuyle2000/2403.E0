#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ct dem so ng.am, ph.am trong 1 chuoi van ban.
int main()
{
    system("cls");
    char text[81]; // chuoi vb co the chua toi da 80 ky tu (ko tinh ky tu NULL)
    printf(">> nhap 1 chuoi van ban bat ky: ");
    scanf("%[^\n]", text);

    printf("=> chuoi nhap: %s \n", text);

    int n = strlen(text); // dem so ky tu trong chuoi text, luu vo bien [n]
    int na = 0, pa = 0;   // khai bao bien dem so na va pa.

    // vong lap duyet tung ky tu trong chuoi [text]
    for (int i = 0; i < n; i++)  {
        // kiem tra ky tu thu i trong chuoi [text ] co phai la na hay pa ko
        if (text[i] >= 'A' && text[i] <= 'Z' || text[i] >= 'a' && text[i] <= 'z')
        {
            switch (text[i])  {
            case 'A':   case 'a':
            case 'E':   case 'e':
            case 'I':   case 'i':
            case 'O':   case 'o':
            case 'U':   case 'u':
                na++; break;
            default:
                pa++; break;
            }
        }
    }
    printf("   co %d nguyen am va %d phu am. \n", na,pa);
}
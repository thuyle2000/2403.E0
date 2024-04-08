#include <stdio.h>
#include <stdlib.h>

//kiem tra 1 ky tu duoc nhap co phai la ky tu so hay ko ?
int main(){
    system("cls");

    char kt;
    printf(" >> vui long nhap 1 ky tu bat ky: ");
    scanf("%c", &kt);

    if(kt>='0' && kt<='9'){
        printf(" => %c la ky tu so ! \n", kt);
    }

    printf(" ket thuc chuong trinh ! hen gap lai ! \n");

}
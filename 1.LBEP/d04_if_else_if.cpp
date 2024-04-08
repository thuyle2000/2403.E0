#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");
    int mark;

    printf(" >> vui long nhap diem ket qua [0-100]: ");
    scanf("%d", &mark);

    if(mark<0 || mark>100){
        printf("\n >> LOI SAI : Diem nhap ko hop le ! \n");
    }
    else if (mark>=90)
    {
        printf("\n >> ban that xuat sac! \n");
    }
    else if (mark>=80){
        printf("\n >> ban gioi qua! \n");
    }
    else if (mark>=70)
    {
        printf("\n >> ban kha ghe! \n");
    }
    else if (mark>=40)
    {
        printf("\n >> Dat yeu cau! \n");
    }
    else
    {
        printf("\n >> Rat tiec! Hen gap lai dot thi sau\n");
    }
    
    printf("\n Ket thuc chuong trinh !");
    
}
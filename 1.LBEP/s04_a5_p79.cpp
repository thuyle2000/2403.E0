#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    float salary, da, ta, hra, others, pf, it;

    printf(" >> nhap luong co ban: ");
    scanf("%f", &salary);

    da = 0.12 *salary;
    ta = 120;
    hra = 150;
    others = 450;
    pf = 0.14 * salary;
    it = 0.15 *salary;

    float net = salary + da+ ta+ hra + others - (pf+ it);
    printf(" >> BANG LUONG CHI TIET << \n");
    printf(" luong co ban: %9.2f \n", salary);
    printf(" phu cap DA:   %9.2f \n", da);
    printf(" phu cap TA:   %9.2f \n", ta);
    printf(" phu cap HRA:  %9.2f \n", hra);
    printf(" khoan khac:   %9.2f \n", others);
    printf("========================\n");
    printf(" phi PF:          %9.2f \n", pf);
    printf(" thue thu nhap:   %9.2f \n", it);
    printf("========================\n");
    printf(" thuc lanh:    %9.2f \n", net);
    printf(" thuc lanh:    %e \n", net);

}
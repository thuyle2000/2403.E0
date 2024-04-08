#include <stdio.h>
#include <stdlib.h>

//nhap 1 day so bat ky, ket thuc viec nhap lieu khi user nhap so 0.
//dem va in ra bao nhieu so chan va so le
int main(){
    system("cls");
    int n;
    int count = 0, even = 0;
    
    //vong lap dc thi hanh khi n!=0
    do{
        printf(" >> nhap 1 so nguyen bat ky (!=0): ");
        scanf("%d", &n);
        count++;
        if(n!=0 && n%2==0){
            even++;
        }
    }while(n!=0);

    printf("\n >> Co %d so da duoc nhap. \n",--count);
    printf("\n >> Trong do, co %d so chan, %d so le. \n",even, count-even);
}
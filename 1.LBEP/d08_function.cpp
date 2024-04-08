#include <stdio.h>
#include <stdlib.h>
//demo lap trinh ham

long square(int n); //khai bao prototype cua ham square()
long ketqua = 0;    // bien toan cuc (global variable)

int main(){
    system("cls");
    int x = 10;
    printf("x = %d \n", x);

    // goi ham square(x) de tinh bp cua x va luu vo bien x2
    long x2 = square(x); 
    printf("binh phuong cua x = %d (x2) \n", x2);
    printf("binh phuong cua 25 = %d \n", square(25));
    printf("binh phuong cua (x+5) = %d \n", square(x+5));
    printf("binh phuong cua (x2) = %d \n", square(square(x)));   
    printf("kq = %d \n", ketqua);
}


//ham square() tinh va tra ve binh phuong cua 1 so nguyen
long square(int n)
{
    long kq = n*n;
    ketqua = kq;
    return kq;
}
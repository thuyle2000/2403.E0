#include <stdio.h>
#include <stdlib.h>

//demo phuong phap truyen dia chi cho tham so hinh thuc
void swap(int a, int b);
void swap2(int &a, int &b);

int main(){
    system("cls");
    int a,b;
    printf("nhap 2 so nguyen bat ky: ");
    scanf("%d%d", &a, &b);

    printf("- truoc khi call swap(): a= %d, b=%d\n", a,b);
    swap(a,b);
    printf("- sau khi call swap()  : a= %d, b=%d\n", a,b);

    printf("\n");
    printf("- truoc khi call swap2(): a= %d, b=%d\n", a,b);
    swap2(a,b);
    printf("- sau khi call swap2()  : a= %d, b=%d\n", a,b);    
}

//ham hoan doi gia tri cua 2 tham so a,b
void swap(int a, int b){
    int tam= a;
    a = b;
    b = tam;
    printf("\t >> trong ham swap(a,b): a=%d, b=%d \n", a,b);
    a=990890;
    b=b*2;
}

//ham hoan doi gia tri cua 2 tham so a,b
void swap2(int &n1, int &n2){
    int tam= n1;
    n1 = n2;
    n2 = tam;
    printf("\t >> trong ham swap2(a,b): a=%d, b=%d \n", n1,n2);
}
#include <stdio.h>
#include <stdlib.h>
//ct sap xep mang so nguyen theo thu tu tang dan. 
//vd [13, 89, 2, 5, 70] => [2, 5, 13, 70, 89]
int main(){
    system("cls");

    int n;

    //vong lap kiem tra viec nhap so phan tu co hop le ko
    while (1==1)
    {
        printf(" >> nhap so phan tu N [5-10]: ");
        scanf("%d", &n);
        if(n>=5 && n<=10){
            break;
        }
    }

    int a[n];   //khai bao mang so nguyen a[] co n-phan tu
    for (int i = 0; i < n; i++)
    {
        printf(" - nhap a[%d]: ", i); scanf("%d", &a[i]);
    }
    
    //in ra noi dung cua mang a[]
    printf(" => a[] = ");
    for (int i = 0; i < n; i++)
    {
        printf("%5d ", a[i]);
    }
    
    int tam =0;
    //sap xep du lieu trong mang a[] theo thu tu tang dan
    for (int k = 1; k < n; k++)
    {
        for (int i = n-1; i >= k; i--)
        {
            if(a[i]<a[i-1]){   // if(a[i]-a[i-1] <0)
                tam = a[i];
                a[i] = a[i-1];
                a[i-1] = tam;
            }
        }  
    }

    //in lai noi dung cua mang a[] sau khi xep thu tu
    printf("\n * sau khi xep thu tu * \n");
    printf(" => a[] = ");
    for (int i = 0; i < n; i++)
    {
        printf("%5d ", a[i]);
    }
    
    
}

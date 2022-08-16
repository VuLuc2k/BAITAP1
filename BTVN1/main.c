#include <stdio.h>

//Ham main
void main(){
int i;
//Khai bao phan tu cua mang arr1, arr2
int a;
int b;
printf ("Nhap so phan tu cua arr1 va arr2 la");
scanf ("%d", "%d", &a, &b);

//Nhap tung phan tu cua mang
char arr1[a];
char arr2[b];

for ( i = 0; i < a; i++)
{
   printf("Nhap arr1[%d]=", i);
   scanf("%d", &arr1[i]);
}

for ( i = 0; i < b; i++)
{
   printf("Nhap arr2[%d]=", i);
   scanf("%d", &arr2[i]);
}
//So sanh
int isEqual(char arr1[a], char arr2[b]);
{
if(a != b){
    return 0;
}
if(a == b){
    for ( i = 0; i < a; i++)
    {
       if(arr1[i]) == arr2[i]{
        return 1;
       }else{
        return 0;
       }
    }
    


}   
}
}
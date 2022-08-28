#include<stdio.h>
//Write a program in C to convert a decimal number to binary using recursion
int dec_bi(int n);


int main (){
int n;

 printf("\nEnter a decimal number :");
   scanf("%d",&n);
   printf("The Decimal %d to Binary is %d\n",n,dec_bi(n));

}
int dec_bi(int n) {
    if(n==0)
    return 0;
else
    return ((n%2)+10*dec_bi(n/2));
}
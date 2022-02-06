#include<stdio.h>
int main(){
    int n = 1;
    int k = 1;
    int a = 0;
    scanf("%d", &a);
    while(k<=a)
    {
        n = k * n;
        k++;

    }
    printf("%d\n",n);
    return 0;
}
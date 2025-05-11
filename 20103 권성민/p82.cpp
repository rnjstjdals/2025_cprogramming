#include<stdio.h>
int n,d[32]; //4byte*8bit
int main(){
    int i=0;
    scanf("%d",&n);
    int i=0;
    do{
        d[i]=n%2;
        n=n/2;
        i++;
    }while(n);
    printf("%d\n",1);
    while(i){
        i--;
        printf("%d ",d[i]);
    }
    printf("\n");
    return 0;
}
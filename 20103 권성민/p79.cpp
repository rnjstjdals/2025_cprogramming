#include<stdio.h>
int n, d[10001];
int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&d[i]);
    }
    //출력
    for(int i=0;i<n;i++)
        printf("%d ",d[i]);


    printf("\n");
    return 0;
}
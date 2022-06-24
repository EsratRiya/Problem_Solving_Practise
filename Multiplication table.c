#include<stdio.h>


void main(){

    int i,n,N;
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        N = n*i;
        printf("%d X %d = %d\n",i,n,N);
    }

}


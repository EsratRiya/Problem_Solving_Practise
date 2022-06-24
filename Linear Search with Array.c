#include<stdio.h>

void main(){
    int arr[5];
    int i,n,a;


    for(i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&n);

    for(i =0; i<5 ; i++){

        if(arr[i] == n){
            a = 1;
            break;
        }
        else{
            a = 0;

        }
    }

    if(a == 1){
        printf("Yes find it");
    }

    else{
        printf("Not found this number ");
    }

}

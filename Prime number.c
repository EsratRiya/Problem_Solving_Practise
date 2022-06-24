#include<stdio.h>
 void main(){
        int number,i,a;
        scanf("%d",&number);

        for(i=2;i<number;i++){
            if(number % i != 0){
                a = 1;
            }
            else{
                a = 0;
                break;
            }
        }

        if(a == 1){
            printf("This is a prime number");
        }
        else{
            printf("This is not a prime number");
        }

 }

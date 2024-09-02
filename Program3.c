#include<stdio.h>
int main(){

        int pre;
        int a=10;
        int b=5;
        a > b ? printf("a is greter\n") : printf("b is greter\n");
        printf("enter mark = ");
        scanf("%d",&pre);
        if(pre<=100){
            if(pre >=91 && pre <=100){
                printf("A+ Grade");
            }
            else if(pre >=81 && pre <=90){
                printf("A grade");
            }
             else if(pre >=71 && pre <=80){
                printf("B+ grade");
            }
             else if(pre >=61 && pre <=70){
                printf("b grade");
            }
             else if(pre >=51 && pre <=60){
                printf("c grade");
            }
            else{
                printf("Low Performance");
            }
        }
        else{
                printf("plase enter less than 100 value");
        }

    
    return 0 ;

}
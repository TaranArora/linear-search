#include<stdio.h>

int main(){

    char array[100];
    int num,i,search,flag;
    printf("Enter number of elements:\n");
    scanf("%d",&num);

    printf("Enter %d integers\n",num);

    for(i=0;i<num;i++){

        scanf("%d",&array[i]);
    }

    printf("Enter the number to search:\n");
    scanf("%d",&search);

    for(i=0;i<num;i++){

        if(array[i] == search){
            
            printf("%d found at position %d",search,i+1);

            flag=1;
        }       
    }
    if(flag!=1){
        printf("%d not found",search);
    }
}
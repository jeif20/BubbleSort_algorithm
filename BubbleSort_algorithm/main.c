//
//  main.c
//  BubbleSort_algorithm
//

#include <stdio.h>

#define MAX 20
int i, total;

void input(int A[]){
    printf("Enter total of elements: \n");
    scanf("%d",&total);
    
    printf("Enter values: \n");
    for(i=0;i<total;i++){
        scanf("%d",&A[i]);
    }
}

void output(int A[]){
    printf("Values entered: \n");
    for(i=0;i<total;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void bubbleSort(int A[]){
    int j,temp;
    for(i=0;i<total;i++){
        for(j=0;j<total-i-1;j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void outputSorted(int A[]){
    printf("Values sorted: \n");
    for(i=0;i<total;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main(){
    int A[MAX];
    
    printf("BubbleSort algorithm\n");
    input(A);
    output(A);
    bubbleSort(A);
    outputSorted(A);
    
    return 0;
}



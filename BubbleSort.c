#include <stdio.h>
int main(){
    int a[5], i, j, temp;
    printf("\n Enter 5 elements:");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    // bubble sort loggic
    for(i=0; i<5-1; i++){
        for(j=0; j<5-1-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j +1];
                a[j+1] = temp;
           }
       }
    }
    printf("Sorted list: \n");
    for(j=0; j<5; j++){
        printf("%d", a[j]);
    }
    return 0; 
}

/*
* OUTPUT OF THE PROGRAM
Enter 5 elements:27
16
44
10
7
Sorted list:
710162744
*/
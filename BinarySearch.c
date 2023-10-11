#include <stdio.h>
int main(){
    int array[]={5, 10, 25, 30, 37, 46, 55, 60, 65, 70};
    int low = 0, mid, high, count = 0, number = 60;
    // printf("\n Enter the element to search: ");
    // scanf("%d", &number); 
    high=(sizeof(array)/sizeof(int))-1;
    while(low <= high){
        mid = (low + high) / 2; 
        if(array[mid] == number){
        count=1;
        break;
        }else if(array[mid] < number){
            low = mid + 1;
        }
    }
    if(count == 0){
        printf("\n Number Not found");
    }else{
        printf("\n Number found");
    }
    return 0; 
}

/*
* Output of the program 
 Number found
*/
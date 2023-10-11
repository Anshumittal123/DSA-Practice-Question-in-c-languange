#include <stdio.h>
int main(){
    int a[20], i, x, n, found = 0, count = 0;
    printf("How many elements: ");
    scanf("%d", &n);
    printf("Enter array elements: \t");
    for(i=0; i<n; ++i)
    scanf("%d",&a[i]);
    printf("\n Enter the element to Search: ");
    scanf("%d", &x);
    for(i=0; i<n; ++i){
        if(a[i] == x){
            found = 1;
            count++;
            if(found == 1){
                printf("\n Element found at index %d", i);
            }
            continue;
        }
    }
    if(found == 1){
        printf("\n Element found %d times.", count);
    } else{
        printf("\n Element not found"); 
    }
    return 0; 
}

/*
*OUTPUT OF THE PROGRAM 
How many elements: 5
Enter array elements:   12
34
12
45
12

Enter the element to Search: 12

Element found at index 0
Element found at index 2
Element found at index 4
Element found 3 times.
*/
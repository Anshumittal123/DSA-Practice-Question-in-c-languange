// Search one element with use of liner search.
#include <stdio.h>
int main(){
    int a[20], i, x, n, found = 0;
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
            break;
        }
    }
    if(found == 1){
        printf("Element found at index %d", i);
    } else{
        printf("Element not found"); 
    }
    return 0; 
}

/*
*OUTPUT OF THE PROGRAM 
How many elements: 5
Enter array elements:   12
34
23
46
57

Enter the element to Search: 57
Element found at index 4
*/
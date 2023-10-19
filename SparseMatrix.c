// Check the Matrix is a sparse matrix or not !!!
#include <stdio.h>
int main(){
    int row, col, i, j, a[10][10], count = 0;
    printf("Enter the row of a Matrix: \n");
    scanf("%d", &row);
    printf("Enter the col of a Matrix: \n");
    scanf("%d", &col);

    printf("Enter the Matrix Element: \n ");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Elements of the Matrix is:\n ");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Check the sparse matrix
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(a[i][j] == 0){
                count++; 
            }
        } 
    }

    if(count > (row * col)/2){
        printf("Matrix is sparse matrix \n");
    } else{
        printf("Matrix is not sparse Matrix \n");
    }

    return 0; 
}

/*
* OUTPUT OF THE PROGRAM 
CASE 1:
Enter the row of a Matrix:
3
Enter the col of a Matrix:
3
Enter the Matrix Element:
1
1
0
0
0
0
0
0
0
Elements of the Matrix is:
1       1       0
0       0       0
0       0       0
Matrix is sparse matrix

CASE 2:
Enter the row of a Matrix:
3
Enter the col of a Matrix:
3
Enter the Matrix Element:
1
1
0
2
2
0
3
3
0
Elements of the Matrix is:
1       1       0
2       2       0
3       3       0
Matrix is not sparse Matrix
*/
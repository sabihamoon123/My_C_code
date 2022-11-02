#include<stdio.h>
int main()
{
    int a[10][10], trans[10][10], i, j, row, col;
    printf("enter number of rows and columns of matrix:") ;
    scanf("%d %d", &row, &col) ;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("a[%d][%d] = ",i,j) ;
            scanf("%d",&a[i][j]) ;
        }
    }
    printf("\nEntered Matrix.\n") ;
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",a[i][j]) ;
        }
        printf("\n") ;
}


for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            trans[j][i] = a[i][j] ;
        }
}

printf("\nTranspose Matrix.\n") ;
for (i=0;i<col;i++){
    for (j=0;j<row;j++){
        printf("%d ", trans[i][j]) ;
    }
    printf("\n") ;
}

}

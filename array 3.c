#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d", &n, &m);
    int a[n][m];
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int max=a[0][0], min=a[0][0];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
    }
    printf("Max is = %d\n", max);
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
    }
    printf("Min is = %d\n", min);
}


#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(j=0; j<m; j++){
        int max=a[0][j];
        for(i=0; i<n; i++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
        printf("Max is = %d\n", max);
    }
    for(j=0; j<m; j++){
        int min=a[0][j];
        for(i=0; i<n; i++){
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
        printf("Min is = %d\n", min);
    }
    return 0;
}

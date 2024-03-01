#include<stdio.h>
int n, m;//numbers of rows=n, numbers of column=m

scanf("%d %d", &n, &m);
int a[n][m];
int i, j;

for(i=0;i<n;i++){
   for(j=0;j<m;j++){
    scanf("%d", &a[i][j]);
   }
}
int max=a[0][0];
int min=a[0][0];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
     if(a[i][j]>max){
        max=a[i][j];
     }
    if(a[i][j]<min){
        min=a[i][j];
    }
    }
}
printf("max is=%d",max);
printf("min is=%d",min);
}


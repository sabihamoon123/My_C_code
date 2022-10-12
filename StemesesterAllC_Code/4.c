#include<stdio.h>
int main ()
{
    int a[100], b[100], c[100], i, j, m=1, dr=0, n ;
    printf("enter the elements in array:") ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]) ;
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i] ;
        c[i]=0 ;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
        if(a[i]==b[j]) {
            c[j]=m ;
            m++ ;
        }
    }
    m=1 ;
    }
    printf("\n\n") ;
    for(i=0;i<n;i++)
    {
        if(c[i]==2){
            dr++ ;
        }
    }
    printf("the duplicate numbers are in array %d",dr) ;
    printf("\n\n") ;
    return 0 ;


}

#include<stdio.h>
int main ()
{
    int a[100], fr[100], i, j, n, ctr ;
    printf("enter the elements in array:") ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]) ;
        fr[i]=-1 ;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n", a[i]) ;
        //fr[i]=-1 ;
    }
    for(i=0;i<n;i++)
    {
        ctr=1 ;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j]){
             ctr++ ;
            fr[j]=0 ;

            }
        }
        if(fr[i]!=0){
            fr[i]=ctr ;
        }
    }
    printf("\nthe frequency of all elements in array are:\n") ;
    for(i=0;i<n;i++)
    {
        if(fr[i]!=0){
            printf("%d occures %d times\n\n", a[i],fr[i]) ;
        }
    }
    return 0 ;



}

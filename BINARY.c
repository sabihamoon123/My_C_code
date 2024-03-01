#include<stdio.h>
int main()
{
    char a[50],srch;

    printf("Enter a string(sorting):");   //Sabiha Mahjabin Moon-ID 221002236
    gets(a);

    int upp=strlen(a)-1,low=0;



    printf("\nEnter a character for search:");
    scanf("%c",&srch);
    int j=0,pos=-1;

    while(low<=upp)              //Sabiha Mahjabin Moon-ID 221002236
    {

        int Mid=(low+upp)/2;
         //in here we find the Mid

        if(a[Mid]==srch)
        {
            //when we searching character and our Mid character same then we found it and we assign our position Mid+1
            pos=Mid+1;
            printf("found at %d",pos);
            return 0 ;
        }
        if(a[Mid]>srch)            //Sabiha Mahjabin Moon -ID 221002236
        {
            //in here when our searching character less then Mid character then we set our upper character Mid-1 because we are already search our Mid
            upp=Mid-1;
        }
        else
        {
            //in here when our searching character getter then Mid character then we set our upper character Mid-1 because we are already search our Mid
            low=Mid+1;
        }

    }j++;
    if(pos==-1)
    {
        printf("NOt found");
    }


}


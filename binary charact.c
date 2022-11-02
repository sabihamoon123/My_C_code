
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50],srch;
                            //65 -90 capital letter A-Z and 97-122 small letter a-z

    printf("Enter a string:");
    gets(ch);

    int uper=strlen(ch)-1,lower=0;



    printf("\nEnter a character for search:");
    scanf("%c",&srch);
    int pos=-1;

    while(uper>=lower)
    {

        int mid=(lower+uper)/2;
        //in here we find the Mid


        if(ch[mid]==srch)
        {
            //when we searching character and our Mid character same then we found it and we assign our position Mid+1
            pos=mid+1;
            printf("found at %d",pos);
            return 0;
        }
        else if(ch[mid]>srch)
        {
            //in here when our searching character less then Mid character then we set our upper character Mid-1 because we are already search our Mid
            uper=mid-1;

        }
        else
        {
            //in here when our searching character getter then Mid character then we set our upper character Mid-1 because we are already search our Mid
            lower=mid+1;
        }

    }
    if(pos==-1)
    {
        printf("NOt found");
    }
    return 0;

}

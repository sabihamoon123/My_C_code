#include<stdio.h>
#include<windows.h>
int i=0;

struct squad{
    char squadName[100];
    int points;
    int nwin;
    int nlose;
    int ndraw;
};
struct squad team[13];

void squadNew(){
    int n;

printf("_________________________________________________________________\n");
    printf("Enter team name = ");
    scanf("%s", team[i].squadName);
    team[i].points=0;
    team[i].ndraw=0;
    team[i].nlose=0;
    team[i].nwin=0;

    i++;

}


void updateStat(){
int w = 2, d = 1;
    int j;
    char n[100];
printf("_________________________________________________________________\n");
printf("\t Enter the name of the team for update:\n");
    scanf("%s",&n);
    for(j=1;j<=i;j++){
if(n==team[j].squadName){

    team[j].points=0;
    printf("Enter number of wins = ");
    scanf("%d", &team[j].nwin);
    printf("Enter number of loses = ");
    scanf("%d", &team[j].nlose);
    printf("Enter number of draws = ");
    scanf("%d", &team[j].ndraw);
    team[j].points = team[j].points + ((w*team[j].nwin)+d*team[j].ndraw);


}else{

    printf("Wrong input, please try again:");
    main();
}

    }



}

void sinfo(){
int j;
for(j=1;j<=i;j++){
printf("_________________________________________________________________\n");
printf("\t\tThe name of Team: %s\n",team[j].squadName);
printf("\t\tThe Wins: %d\n",team[j].nwin);
printf("\t\tThe lose: %d\n",team[j].nlose);
printf("\t\tThe draw: %d\n",team[j].ndraw);
printf("\t\tThe point: %d\n",team[j].points);


}


}

void showPoint(){
    int j;
printf("_________________________________________________________________\n");
printf("\tThe point table:");
printf("_________________________________________________________________\n");

for(j=1;j<=i;j++){
printf("\tpoint of\t  %d Team is\t :%d\n",j,team[j].points);

}


}


int main(){
    int  userin;
    while(1){
   printf("_________________________________________________________________\n");
    printf("\tEnter Corresponding number for operation --\n");
    printf("\n\t(1) Print  Squad  Info \n");
    printf("\n\t(2) Enter  Squad  Info \n");
    printf("\n\t(3) Update Squad  Info \n");
    printf("\n\t(4) Show   Point  Table\n");
    printf("\n\t(5) Exit\n");
    printf("\n\tEnter your input = ");
    scanf("%d", &userin);
    switch(userin){

        case 1:
        sinfo();
        break;
        case 2:
        squadNew();
        break;
        case 3:
        updateStat();
        case 4:
        showPoint();
        break;
        case 5:
        exit(0);
        break;
        default:

        break;


    }

    }

}

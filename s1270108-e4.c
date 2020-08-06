#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main(){
    int i,he=0,ta=0;
    char name[30];

    srand((unsigned int)time(NULL));
    
    printf("Who are you?\n");
    printf(">");
    scanf("%s,name");
    printf("Hello, %s\n",name);

    printf("Tossing a coin...\n");

    for(i=0;i<3;i++){
        if(0==rand()%2){
            he++;
            printf("Round %d: Heads\n",i+1);

        }
        else{
            ta++;
            printf("Round %d:Tails\n",i+1);
        }
    }

    printf("Heads: %d,Tails: %d\n",he,ta);
    
    if(he>ta){
    printf("%s won!\n",name);
}

    else{
       printf("%s lost!\n",name);  
    }


    return 0;
}

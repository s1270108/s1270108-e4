#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main(){
    int i,he=0,ta=0;

    srand((unsigned int)time(NULL));


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

    return 0;
}

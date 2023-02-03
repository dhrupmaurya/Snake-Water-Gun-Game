#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int SWG_Game(char player1 ,char player2);


int main()
{
    char player1 ,player2;
    int num;
    srand(time(0));
    num =rand()%100+1;
    if(num<33){
        player2 ='s';
    }
    else if(num<66 && num>33){
        player2 ='w';
    }
    else{
        player2 ='g';
    }

    printf("Enter s for Snake w for Water and g for Gun:");
    scanf("%c",&player1);
    int result = SWG_Game(player1,player2);

    printf("Player1 chose %c  and Player2 chose %c .\n",player1,player2);
    if(result ==0){
        printf("Game Draw\n");

    }
    else if (result ==1){
        printf("you win");

    }
    else{
        printf("You lose");
    }


     return 0;
}

int SWG_Game(char player1 ,char player2){
    //If both Equal
    if(player1==player2){
        return 0;

    }
    //If both Unequal
    if(player1=='s' && player2=='g'){
        return -1;
    
    }
    else if(player1 =='g' && player2 =='s'){
        return 1;
    }
    if(player1=='s' && player2=='w'){
        return 1;
    
    }
    else if(player1 =='w' && player2 =='s'){
        return -1;
    }
    if(player1=='w' && player2=='g'){
        return 1;
    
    }
    else if(player1 =='g' && player2 =='w'){
        return -1;
    }
}


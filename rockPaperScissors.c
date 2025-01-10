
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int game(char me, char computer){
    if(me == computer) {
        return -1;
    }
    if(me == 'r' && computer == 'p'){
        return 0;
    } else if(me == 'p' && computer == 'r'){
        return 1;
    }
    if(me == 'r' && computer == 's'){
        return 1;
    } else if(me == 's' && computer == 'r'){
        return 0;
    } 
    if(me == 'p' && computer == 's'){
        return 0;
    } else if(me == 's' && computer == 'p'){
        return 1;
    }
    return -1;
}

int main(){

    // stores rand num
    int n;

    char me, computer, result;

    srand(time(NULL));

    n = rand() % 100;

    if(n < 33){
        computer = 'r';
    } else if(n > 33 && n < 66){
        computer = 'p';
    } else{
        computer = 's';
    }

    printf("\n\n\n\n\t\t\t\tEnter r for ROCK, p for PAPER and s for SCISSOR\n\t\t\t\t\t\t\t");

    scanf("%c", &me);

    result = game(me, computer);
 
    if (result == -1) {
        printf("\n\n\t\t\t\tIt's a draw!\n");
    }
    else if (result == 1) {
        printf("\n\n\t\t\t\tYou won!\n");
    }
    else { 
        printf("\n\n\t\t\t\tYou lost!\n");
    }
        printf("\t\t\t\tYou choose : %c and Computer choose : %c\n",me, computer);
 
    return 0;


}

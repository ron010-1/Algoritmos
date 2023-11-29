#include <stdio.h>

int main(){
    int n, experiments=0, amount=0, rabbits=0, frogs=0, rats=0;
    char type;
    scanf("%d", &n);

    //means that will be run the code block n times
    while(n--){
        scanf("%d %c", &amount, &type);
        experiments += amount;
        switch(type){
        	case 'C': rabbits += amount;break;
        	case'R': rats +=amount;break;
        	case 'S': frogs +=amount;break;
        	}
        amount = 0;
    }
    float percentageRabbits = ((float)rabbits / experiments) * 100;
    float percentageFrogs = ((float)frogs / experiments) * 100;
    float percentageRats = ((float)rats / experiments) * 100;
    printf("Total: %d cobaias\n", experiments);
    printf("Total de Coelhos: %d\n", rabbits); 
    printf("Total de Ratos: %d\n", rats);
    printf("Total de Sapos: %d\n", frogs);
    printf("Percentual de Coelhos: %.2f %%\n", percentageRabbits);
    printf("Percentual de Ratos: %.2f %%\n", percentageRats);
    printf("Percentual de Sapos: %.2f %%\n", percentageFrogs);

    return 0;
}

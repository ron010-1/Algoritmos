//Problema (StackOverFlow): ol�, estou tentando escrever um algoritmo em C que l� um valor inteiro N e um vetor de 10 posi��es.
//Que busque o valor dentro do vetor, se existir informar a posi��o, por�m se n�o existir, encontrar o valor mais pr�ximo existente. 

#include <stdio.h>
#include<conio.h>

const int TAMANHO = 10;
void main(){
	//Declarando vetor
	int vet[TAMANHO];
	//Declarando Variaveis
    int i, n, k, posicao, maior = 0, menor = 0, maiorNumero = 0;
    
    //loop pra ler os numeros do array
    for(i=0; i<TAMANHO; i++){
    	printf("Insira um numero:");
    	scanf("%d", &vet[i]);
	}
	
	//Quebra linhas
	printf("\n");
	
	//ler N
    printf("N: "); 
    scanf("%d", &n); //N � o numero que o usuario saber se ha no array 
    
	//loop para saber o maior numero do array
	for(i=0; i<TAMANHO;i++){
		if(maiorNumero < vet[i]){
			maiorNumero = vet[i];
		}
	}  
	
	//loop quando o numero esta dentro do array 
    for(i = 0; i < 10; i++){
    	if(n == vet[i]){
    		printf("O numero %d esta no vetor na posicao %d", n);
		}            
    }
    
     // Vari�veis para armazenar os n�meros mais pr�ximos
    int numeroProximoMaior = -1;
    int numeroProximoMenor = -1;

    // Loop para encontrar os n�meros mais pr�ximos
    for (k = 1; k <= maiorNumero; k++) {
        for (i = 0; i < TAMANHO; i++) {
            //pega o valor n e soma k.
            maior = n + k;
            //pega o valor n e subtrai k.
            menor = n - k;

            if (maior == vet[i]) {
                numeroProximoMaior = maior;
            } else if (menor == vet[i]) {
                numeroProximoMenor = menor;
            }
        }
        // Se ambos os n�meros pr�ximos forem encontrados, pare o loop
        if (numeroProximoMaior != -1 && numeroProximoMenor != -1) {
            break;
        }
    }

    // Verificando se foram encontrados n�meros pr�ximos e imprimindo os resultados
    if (numeroProximoMaior != -1) {
        printf("O numero mais proximo maior que %d no vetor e: %d.\n", n, numeroProximoMaior);
    }
    if (numeroProximoMenor != -1) {
        printf("O numero mais proximo menor que %d no vetor e: %d.\n", n, numeroProximoMenor);
    }
		

    getch();
}

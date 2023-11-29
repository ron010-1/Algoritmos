#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i=6, count=0;
    float num, amount =0;

    while(i--){
        scanf("%f", &num);
        if(num>0.0){
            count++; 
            amount +=num;
        }
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n", ((float)amount / count));
}

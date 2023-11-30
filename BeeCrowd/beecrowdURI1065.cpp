#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i=5, count=0, num;

    while(i--){
        scanf("%d", &num);
        if(abs(num) % 2 == 0){
            count++; 
        }
    }

    printf("%d valores pares\n", count);
}

	#include <stdio.h>

	int main(){
		int w, x, y, z, w1, x1, y1, z1;
		int dia, hora, minuto, segundo;
		//Inicio
		printf("Dia: ");
		scanf("%d", &w);
		scanf("%d%d%d",&x,&y,&z);
		
		//Fim
		printf("Dia: ");
		scanf("%d", &w1);
		scanf("%d%d%d", &x1,&y1,&z1);
		
		dia = w1 - (w +1);
		hora = (24-x) + x1;
		minuto=  y1 - y;
		segundo= z1 -z;
		
		printf(" %d dias (s)\n %d horas (s)\n %d minutos (s)\n %d segundo (s)", dia, hora, minuto, segundo);
			
		
		return 0;
	}

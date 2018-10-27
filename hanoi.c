#include <stdio.h>
#include <stdlib.h>

/* ========================================
 * Copyright 27/10/2018|| Gyovanne Cavalcanti
 * Bch. Information Technology
 * UFERSA - Pau dos Ferros/Rn
 * <gyovannecavalcanti@yahoo.com.br>
 * ========================================*/

void move(int n, char* orig,char* temp,char* dest)
{
	if (n==1) 
		printf("mova o disco 1 da haste %s para a haste %s\n",orig, dest);
	else{
		move(n-1,orig,dest,temp);
		printf("Mova o disco %d da haste %s para a haste %s\n", n, orig, dest);
		move(n-1,temp,orig,dest);
	}
}

int main()
{
	int qtd=0;
	puts("Quantidade de peças:");
	scanf("%d",&qtd);
	
	move(qtd,"Origem","Temporaria","Destino");
	
	return 0;	
}	


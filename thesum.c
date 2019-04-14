/*
# no_term

# Algoritmo di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


Algoritmi "thesum": Algoritmo che dopo aver chiesto all'utente di inserire un numero intero da tastiera, lo somma ad un altro intero letto da un file di testo "sum.dat".
Infine aggiorna il file "sum.dat" con il nuovo valore.
Il programma iene conto del caso in cui il file "sum.dat" non esista.

	- Algoritmo "thesum.c": Algoritmo "thesum" in Linguaggio C.
*/

#include <stdio.h>
int main()
{
	FILE *f;
	int sum = 0;
	int val = 0;
	f = fopen("sum.dat", "r");
	if (!f) {
		fprintf(stderr, "IMPOSSIBILE APRIRE \"sum.dat\"!!!");
		fprintf(stdout, "\nIL FILE \"sum.dat\" NON ESISTE: "\
			"Verra' creato in fase di salvataggio dei dati.");
	sum = 0;
	}
	else
	{
		printf("Lettura del file sum.dat in corso ...\n");
		fscanf(f,"%d",&sum);
		fclose(f);
	}
	printf("\n\nValore corrente:\t%d",sum);
	printf("\n\nInserisci il valore da sommare:\t");
	scanf("%d",&val);
	sum += val;
	printf("\n\nNuovo valore:\t%d",sum);
	printf("\nSalvataggio nel file \"sum.dat\" in corso ...\n");
	f = fopen("sum.dat","w");
	fprintf(f,"%d\n",sum);
	fclose(f);
return 0;
}

'''
# no_term

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


Algoritmi "thesum": Algoritmo che dopo aver chiesto all'utente di inserire un numero intero da tastiera, lo somma ad un altro intero letto da un file di testo "sum.dat".
Infine aggiorna il file "sum.dat" con il nuovo valore.
Il programma iene conto del caso in cui il file "sum.dat" non esista.

	- Algoritmo "thesum.py": Algoritmo "thesum" in Linguaggio Python.
'''

import os
somma = 0
val = 0
filename = 'sum.dat'
if not os.path.isfile(filename):
	print("Impossibile aprire il file \"sum.dat\"!\n"\
		"Verra' creato in fase di salvataggio dati.")
	somma = 0
else:
	f = open (filename, 'r')
	print("Lettura del file \"sum.dat\" in corso ...\n")
	line = f.readline()
	somma = int (line)
	f.close()
print("Valore corrente:\t",somma)
val = input("\nInserisci il valore da sommare:\t")
somma += int (val)
print("\nNuovo valore:\t",somma)
print("Salvataggio nel file \"sum.dat\" in corso ...")
f = open(filename, 'w')
f.write(str(somma))
f.close()
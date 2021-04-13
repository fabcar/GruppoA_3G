/*
 * vettore.c
 * 
 * Copyright 2021 utente <utente@utente-VirtualBox>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

//Dichiarazione di libreria

#include <stdio.h>

//protodipi di nunzione

int caricaArray(int vett[]);

//programma prinipale
int main(int argc, char **argv)
{
	// vettore di interi dichiarazione
	int vett[10];
	//posizione del vettore
	int i;
	int somma;
	float media;
	//lunghezza dell'array
	
	
	//inizializzazione
	
	somma = 0;
	i = 0;
	media = 0;
	
	
	for (i = 0; i< 10 ; i++)
	{
		printf("inserisci il numero in pos %d ",i);
		scanf("%d",&vett[i]);
		somma += vett[i];
		
	}
	media = somma/i;
	printf ("la somma è %d e la media è %f",somma,media);
	return 0;
}

// crei il codice della funzione implementazione

int caricaArray(int vett[])
{
	int risposta = 0;
	for (int i = 0; i < 10 ; i++)
	 {
		printf("inserisci il numero in pos %d ",i);
		scanf("%d",&vett[i]);
	 }
	return risposta;
}

#include<stdio.h>
main (){
	int tab[15][15];
	int n,m,a,b;
	printf("entrer le nombre de lignes de la matrice 1");
	scanf("%d",&n);
	printf("entrer le nombre de colone de la matrice 1");
	scanf("%d",&m);
	//remplissage matrice 1
	printf("entrer les elements de la matrice 1\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("tab[%d][%d]",i,j);
			scanf("%d",&tab[i][j]);
		}
	}
	//remplissage matrice 2
	printf("entrer le nombre de lignes de la matrice 2");
	scanf("%d",&a);
	printf("entrer le nombre de colone de la matrice 2");
	scanf("%d",&b);
	printf("entrer les elements de la matrice 2 \n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("tab[%d][%d]",i,j);
			scanf("%d",&tab[i][j]);
		}
	}
	//multiplication des matrices
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			tab[i][j]=tab[i][j]*tab[i][j];
			
		}
	}
	//affichage
	printf("resultat\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("|%d|",tab[i][j]);
		}
		printf("\n");
	}
	return 0;
}

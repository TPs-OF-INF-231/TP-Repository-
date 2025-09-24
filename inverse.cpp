#include<stdio.h>
main(){
	int tab[200];
	int m,i,n;
	printf("entrer le nombre delements du tableau\n");
	scanf("%d",&n);
	//creation et parcours
	printf("remplissage\n");
	for(i=0;i<n;i++){
		printf("\n element %d\n",i);
		scanf("%d",&tab[i]);
	}
	//affichage a l'envers
	printf("affichage\n");
	for(i=n-1;i>=0;i--){
		printf("%d",tab[i]);
	}
}

#include<stdio.h>
main(){
	int tab[200];
	int m,i,n;
	printf("entrer le nombre d'elements du tableau\n");
	scanf("%d",&n);
	//creation et parcours
	printf("remplissage\n");
	for(i=0;i<n;i++){
		printf("\n element %d\n",i);
		scanf("%d",&tab[i]);
	}
	//recherche min
    printf("entrer lelement a rechercher\n");
    scanf("%d",&m);
    for(i=0;i<n;i++){
    	if(tab[i]==m){
    		printf("element trouve a la position %d\n",i);
    		break;
    	}
        
		}
		}
		
		
		
		
		

	


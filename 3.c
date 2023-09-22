#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    	
    struct nota{
    		
    	float nota[2];
    		
    };
		
		
	struct aluno {
    		
    	char nome[255];
    	char disciplina[255];
    	struct nota n;
    		
    };
    	
    	
    int main() {
    	
    	setlocale(LC_ALL, "Portuguese");
			
		struct aluno a[2];
    	
    	int i, j, k;
		float media[2]= {0.0, 0.0};
    	    
    	for(i=0;i<2;i++) {
    	    	
    	    printf("\nNOME DO ALUNO: ");
    	    gets(a[i].nome);
    	    printf("NUMERO DO CURSO: ");
    	    gets(a[i].disciplina);
    	    fflush(stdin);
    	    	
    	}
    	    
    	system("cls");
    	    
    	for(i=0;i<2;i++){
    	    	
    	    printf("\n---- %s |%s| ----\n\n", a[i].nome, a[i].disciplina);
    	    
    	for(j=0;j<2;j++) {
    	    	
    	    printf("Digite a nota %d: ", j+1);
    	    scanf("%f", &a[i].n.nota[j]);
    	    media[i] += a[i].n.nota[j] * ((j == 0) ? 1.0 : 2.0);
    	    
    	    }
    	    
    	    media[i] /= 3;
    	    
    	}
    	
    	system("cls");
    	
		for (k = 0; k < 2; k++) {
            
			printf("\n--- %s | %s | ---\n", a[k].nome, a[k].disciplina);
            printf("Media Final: %.1f\n", media[k]);
            
        }
    	
    	printf("\n\n");
    	
      system("pause");
      return 0;
    	
    }

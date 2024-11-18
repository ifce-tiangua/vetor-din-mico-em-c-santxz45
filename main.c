#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *p;
    scanf("%d", &n);
    
    if(n == 0){
        printf("[vazio]");
        return 0;
    }
    
    p = (int *) malloc (n * sizeof(int));
    
    if(p == NULL){
        printf("Erro ao alocar memória\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    
    printf("'[");
    for(int i = 0; i < n; i++){
        if(i > 0) printf(",");
        printf("%d", p[i]);
    }
    
    printf("]'\n");
    
    free(p);
    
    return 0;
}

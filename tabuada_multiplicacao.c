// tabuada.c (MEU)
#include <stdio.h>
int main() {
    int w,x,y,z,a;
    printf("tabuada\n\n");
    printf("Tabuada de: ");
    scanf("%d",&x);
    printf("\nDigite o número (inicial) de repetições: ");
    scanf("%d",&w);
    printf("\nDigite o (máximo) de repetições: ");
    scanf("%d",&y);
    printf("\n");
    
    a=0;
    for(z=w;z<=y;z++){
        printf("%d x %d = %d\n",x,z,x*z);
        a+=x*z;
    }
    printf("\nValor total dos Resultados: %d\n",a);
    
    return 0;
}

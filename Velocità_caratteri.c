#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int v_in;
    float v_fin;
    
    printf("Inserisci la velocita in m/s: ");
    scanf("%d", &v_in);
    
    v_fin = v_in*3.6;
    printf("La velocità in km/h di %dm/s vale %10.2e\n",v_in,v_fin);
    
    char c;
    printf("Inserisci un carattere: ");
    //fflush(stdin); //WIN
    fpurge(stdin);  //MAC
    scanf("%c",&c);
    if ((c>='A') && (c<='Z'))
        printf("Il carattere inserito è: %c\n",c-'A'+'a');
    else
        printf("Il carattere inserito è: %c\n",c);
    
    return 0;
}


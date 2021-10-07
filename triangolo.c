#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float ax,ay,bx,by,cx,cy;
    float lato1, lato2, lato3;
    float perimetro;
    float m,q;
    
    printf("Inserisci le coordinate del punto A:\n");
    scanf("%f %f",&ax,&ay);
    printf("Inserisci le coordinate del punto B:\n");
    scanf("%f %f",&bx,&by);
    printf("Inserisci le coordinate del punto C:\n");
    scanf("%f %f",&cx,&cy);
    
    //controllo se il triangolo è degenere
    //1. i punti non coincidono
    if (((ax==bx) && (ay==by)) || ((ax==cx) && (ay==cy)) || ((cx==bx) && (cy==by)))
    {
        //Almeno due punti coincidono, quindi il triangolo non esiste
        printf("Il trinagolo non esiste\n");
        return -1;
    }
    //2. i punti non sono allineati
    //calcolo retta per due punti
    m = (ay-by)/(ax-bx);
    q = (ax*by - bx*ay)/(ax-bx);
    if (cy == m*cx+q)
    {
        //I punti sono allineati, ovvero sulla stessa retta
        printf("I tre punti sono allineati. Il trinagolo non esiste\n");
        return -1;
    }
    
    //Calcolo i lati
    lato1 = sqrt(pow(ax-bx,2)+pow(ay-by,2));
    lato2 = sqrt(pow(bx-cx,2)+pow(by-cy,2));
    lato3 = sqrt(pow(ax-cx,2)+pow(ay-cy,2));
    perimetro = lato1+lato2+lato3;
    
    printf("Il perimetro vale: %.2f\n",perimetro);
    return 0;
}


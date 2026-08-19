#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int x1, x2, p1, p2, y1, y2;
float dist;
printf("Insira as coordenadas do ponto P1:");
scanf("%d %d" , &x1, &y1);
printf("Insira as coordenadas do ponto P2:");
scanf("%d %d", &x2, &y2);

p1 = pow(x2 - x1, 2);
p2 = pow(y2 - y1 , 2);

dist = sqrt(p1+p2);

printf("Distancia (%f):", dist);

return 0;
}

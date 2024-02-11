#include <stdio.h>

//Jaime B Perez Jr.

int addgrade(int gr1, int gr2, int gr3, int gr4, int gr5);
int finalgrade(int result);

int main(){

int g1,g2,g3,g4,g5, result1, total;
printf("Input 5 grades to see the average\n");
printf("Please Input the 5 Grades. (G1 G2 G3 G4 G5):");
scanf(" %d %d %d %d %d", &g1,&g2,&g3,&g4,&g5);

result1 = addgrade(g1,g2,g3,g4,g5);
total = finalgrade(result1);

printf("The result is %d:", total);
}
int addgrade(int gr1, int gr2, int gr3, int gr4, int gr5){
    int total2;
    total2 = gr1 + gr2 + gr3 + gr4 + gr5;
    return total2;
}
int finalgrade(int result){
    int total1;
    total1 = result/5;
    return total1;
}

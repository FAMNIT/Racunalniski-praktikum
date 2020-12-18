#include <stdio.h>
int main(int argc, char const *argv[]) {
   int a[2][3]={1,2,3,4,5,6};   // na vajah smo definirali jih kot 3 vrstice v 2 stolpcih([3][2]), a to se definira kot tri arrayi, vsak s dvema elementoma.
   int b[3][2]={7,8,9,10,11,12};// pri definiciji arraya prvi sluzi kot koliko arrayov je, po koliko elementov v vsakemu.
   int c[2][2];
   int tmp;

//računanje matrike
   for (int i = 0; i < 2; i++) { // i služi kot posamezna vrstica A matrtrike
      for (int j = 0; j < 2; j++) {// j služi kot posamezen stolpec B matrike
         tmp=0; // pred novim sestevanjem stolpcev mat. A in vrstic mat B je potrebno tmp še "počistiti".
         for (int k = 0; k < 3; k++) {// k spremenljivka gre čez vse elemente v stolpcu matrike A in vse v vrstici pri matriki B
         tmp=(a[i][k]*b[k][j])+tmp; // s tem pomnožimo vsak element iz obeh matrik, in jih s tmp še šeštevamo skupaj
         //printf("|%i*%i=%i+%i|",a[k][i],b[j][k],(a[k][i]*b[j][k]),tmp); //printout za testiranje pri posameznem seštevanju.
         }
      c[i][j]=tmp;
      printf("|%i|",c[i][j]);
      }
      printf("\n");
   }
   return 0;
}

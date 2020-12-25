#include <stdio.h>
int main(int argc, char const *argv[]) {

   char chart[] = {"abcdefghijklmnoprstuvz "};
   char besedilo[]="danes gremu na morje z babo ter psom";
   char cribesedi[strlen(besedilo)];
   char decribesedi[strlen(besedilo)];
   for (size_t i = 0; i < strlen(besedilo); i++) {
      for (size_t j = 0; j < strlen(chart); j++) {
         if(besedilo[i]==chart[j]){
            int cnt=(j+3)%strlen(chart);
            cribesedi[i]=chart[cnt];
         }
      }
   }
   printf("%s\n",besedilo);
   printf("%s\n",cribesedi);

   for (size_t i = 0; i < strlen(cribesedi); i++) {
      for (size_t j = 0; j < strlen(chart); j++) {
         if(cribesedi[i]==chart[j]){
            int cnt=(j-3);
            //printf("|%i|", cnt);
            if(cnt<0){
               cnt =cnt+strlen(chart);
            }
            decribesedi[i]=chart[cnt];
         }
      }
   }
   printf("%s",decribesedi);
   return 0;
}

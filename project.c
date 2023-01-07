#include <stdio.h>

int main(void) {
   FILE* fp;
    float note;
   fp = fopen("./test.txt", "w");
   for (int i = 0; i <= 5; i++){
    printf("entrer la note note numero %d", i);
    scanf("%f", &note);
    fprintf(fp,"l'etudiant numero %d a: ", note, "\n");
   }

   fclose(fp);
}
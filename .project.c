#include <stdio.h>

int main() {
   FILE* fp;
    float note;
    int arrSheet[5];
   for (int i = 0; i <= 5; i++){
    printf("entrer la note note numero %d", i);
    scanf("%f", &arrSheet[i]);
   }

   fp = fopen("./test.txt", "w");
   for(int j = 0; j <= 5; j++){
    fputs(fp, arrSheet[j]);
   }
   
   
//    fprintf(fp, "This is testing for fprintf...\n");
//    fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}
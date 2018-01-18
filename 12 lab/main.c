#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define add_days 1;

int main() {
    time_t t = time(NULL);
  struct tm* aTm = localtime(&t);

  FILE* text = fopen("1.txt", "w");
if (text == NULL){
    printf("Error");
} else {

 fprintf(text,"%04d/%02d/%02d\n",aTm->tm_year+1900, aTm->tm_mon+1, aTm->tm_mday);
 int i=0;
 while(i<=9){aTm -> tm_mday +=add_days;
 time_t next = mktime(aTm);
 aTm = localtime(&next);
 fprintf(text,"%04d/%02d/%02d\n",aTm->tm_year+1900, aTm->tm_mon+1, aTm->tm_mday);
 i++;}

    fclose(text);}
    return 0;
}

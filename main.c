#include <stdio.h>
#include "txtfind.h"
#include <string.h>



int main(){
    int count=0;
    char c ='a';
    char bufi[LINE];
   fgets(bufi,256,stdin);
   char firstWord[WORD];
   char secondWord[WORD];
   int index =0;
   while(index<256){
      if(bufi[index]==' ' || bufi[index]== '\t' || bufi[index]== '\n'){
         break;
      }
      firstWord[index]=bufi[index];
      index++;
   }
   index++;
   c=bufi[index];
   printf("%c \n",c);
   printf("%s \n",firstWord);
   fgets(bufi,256,stdin);
   if(c='a'){
      while(count<5){
         fgets(bufi,256,stdin);
         int len=(int)strlen(bufi);
         printf("BUFI LENGTH IS: %d",len);
         int counter=0;
         for (size_t i = 0; i < len; i++)
         {
            if(bufi[i]!=' ' && bufi[i]!= '\t' && bufi[i]!= '\n'){
              secondWord[counter]=bufi[i];  
            }
            if(bufi[i]== ' '|| bufi[i] =='\t' || bufi[i]=='\n'){
               if(substring(secondWord,firstWord)){
                  printf("%s \n",bufi);
                  counter=0;
                  break;
               }
               counter=0;
            }
            counter++;
         }        
         count++;
   }
}
   return 0;
}
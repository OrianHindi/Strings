#include <stdio.h>
#include "txtfind.h"
#include <string.h>

int Getline(char s[]){
    int count=0;
    while(s[count]!='\n'){
        count++;
    }
    return count;
} 
int substring(char* str1,char* str2){

    int count =0;
    size_t len1=strlen(str1);
    size_t len2=strlen(str2);
   if(len2>len1) return 0;
    for (size_t i = 0; i < len1; i++){
        if(str1[i]==str2[0] && i+len2<len1){
            for (size_t j = 0; j <= len2; j++){
                if(str1[i+j]==str2[j]){
                    count++;
                }
            }
            if(count==len2)return 1;
        }  
        count=0;     
    }
return 0;
}
int similar(char* str1,char* str2){
    int count =0;
    int len1 = (int)strlen(str1);
    int len2 = (int)strlen(str2);
    if(len1==len2){
       for (size_t i = 0; i < len1; i++)
       {
           if(str1[i]!=str2[i]) return 0;
       }
        return 1;
    }
    if(len1>len2+1) return 0;
    for (size_t i = 0; i < len1; i++)
    {
        for (size_t j = 0; j <i;j++)
        {
            if(str1[j]==str2[j]){
                count++;
            }
        }
        for (size_t r = i+1;  r<=len1; r++)
        {
            if(str1[r]==str2[r-1]){
                count++;
            }
        }
        if(count==len2) return 1;
        count=0;
    }
    
return 0;
}



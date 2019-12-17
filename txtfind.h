#ifndef _TXTFIND_H
#define _TXTFIND_H
#define LINE 256
#define WORD 30

int Getline(char s[]);
int getword(char w[]);
int substring(char*,char*);
int similar(char*,char*);
void print_lines(char*);
void print_similar_words(char*);

#endif
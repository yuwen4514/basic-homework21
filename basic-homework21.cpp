#include <stdio.h> 
#include <stdlib.h>

struct servitor

{

   char m[8],q[12];

   int g,w,h;

};

void calc(struct servitor *);

int main(void)

{

   struct servitor emp; 

   printf("                 Servitor�uŪ�͵��c��                 \n");

   printf("-------------------------------------------------\n"); 

   printf("�п�J�s��,�m�W,���~,�u�@�ɼ�: ");

   scanf(" %s %s %d %d", emp.m, emp.q, &emp.g, &emp.w);

   calc(&emp);

   printf("�리�J: %d\n", emp.h);

   system("pause"); 

   return 0;

}

void calc(struct servitor *p)

{
    p->h=p->g*p->w;
}

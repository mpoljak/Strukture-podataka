#ifndef writeInFile_h
#define writeInFile_h

#include "personStruct.h"
#include "printStudents.h"


int writeInFile(Position p)
{
	FILE* fp = NULL;
	fp = fopen("person.txt", "w");
	if (fp == NULL)
	{
		printf("Dear coustomer, the file didn't open\n");
		return 1;
	}
	while (p != NULL)
	{
		fprintf(fp, "\n %s %s %d", p->firstName, p->lastName, &p->birthYear);
		p = p->next;
	}
	fclose(fp);
	return 0;
}

#endif
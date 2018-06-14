#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
	
	}
	break;
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	{
		printf("уже делали эти задания\n\n");
	}
	break;
	case 7:
	{

	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}
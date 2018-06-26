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
	/*1.	Локатор может быть ориентирован на одну из сторон света («C» – север, «Ю» – юг, «З» –  запад, «В» – восток) и может принимать команды:
	«1» – поворот направо (90º), «–1» –  поворот налево (–90º),
	«2» – поворот в обратную сторону (180º). Исходная ориентация локатора «C».
	Определить ориентацию локатора после выполнения последовательности вводимых команд N1, N2 .*/

		int N1, N2, x=0;
		printf("\nВведите две последовательные команды для ориетации локатора \n(«1» – поворот направо (90º), «–1» –  поворот налево (–90º), «2» – поворот в обратную сторону(180º):\n");
		scanf("%d %d", &N1, &N2);

		if (N1 == 1)
			x = x + 90;
		else if (N1 == -1)
			x = x - 90;
		else if (N1 == 2)
			x = x + 180;
		else
		{
			printf("ERROR: wrong command\n\n");
			goto Error;
		}

		if (N2 == 1)
			x = x + 90;
		else if (N2 == -1)
			x = x - 90;
		else if (N2 == 2)
			x = x + 180;
		else
		{
			printf("ERROR: wrong command\n\n");
			goto Error;
		}

		if (x == 0 || x % 360 == 0) printf("\nNorth!\n\n");
		else if (x % 180 == 0) printf("\nSouth!\n\n");
		else if (x % 270 != 0 && x % 90 == 0) printf("\nEast!\n\n");
		else if (x == -90 || x % 270 == 0) printf("\nWest!\n\n");
	Error:
		printf("Try again!\n\n");

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
		default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}

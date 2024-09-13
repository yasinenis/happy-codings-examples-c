// C Programming - Map enum to string array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum transport { car, train, airplane, bus }tp;

char trans[][20] = { "car","train","airplane","bus" };

int main()
{
	printf("Press a key to select transport: ");

	/* Generate a new random number */
	srand(time(NULL));

	getchar();

	// Rastgele bir transport türü seç
	enum transport tp = (enum transport)(rand() % 4);


	printf("%s \n", trans[tp]);

	return 0;
}
#include <stdio.h>

int main()
{
	//Variabel
	float celcius, farenheit, reamur;
	
	//Input 
	printf ("Masukan suhu dalam Celcius: ");
	scanf ("%f", &celcius);
	
	//Proses 
	farenheit = (celcius * 9 / 5) + 32;
	reamur = (celcius * 4 /5);
	
	//Output
	printf ("Suhu dalam Farenheit: %.2f derajat\n", farenheit);
	printf ("Suhu dalam Reamur: %.2f derajat\n", reamur);
		
	return 0;
}

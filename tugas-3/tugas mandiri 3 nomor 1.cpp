#include <stdio.h>
#include <math.h>

int main() 
{
	//Variabel
	float alas, tinggi, sisi_miring, luas, keliling;
	
	//Input
	printf ("Masukan panjang alas segitiga (cm):");
	scanf ("%f", &alas);
	printf ("Masukan tinggi segitiga (cm):");
	scanf ("%f", &tinggi);
	
	//Proses : Menghitung luas segitiga
	luas = 0.5 * alas * tinggi;
	
	//Proses : Menghitung sisi miring
	sisi_miring = sqrt((alas*alas) + (tinggi*tinggi));
	
	//Proses : Menghitung keliling segitiga
	keliling = alas + tinggi + sisi_miring;
	
	//Output 
	printf ("Luas segitiga adalah: %.2f cm^2\n", luas);
	printf ("Keliling segitiga adalah: %2f cm\n", keliling);
	
	return 0; 
	
}

#include <stdio.h>

int main() {


	int x = 56; 
	int y = 49;
	while (x != y) {  //wiederhole, wenn x ungleich y
	    // Re-Initixlsierung von x oder y
	    if (x >= y)	{
			x = x - y;
		}
	    else  y = y - x;
	}
	printf("Ergebnis: %d", x);
}

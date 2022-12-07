#include <stdio.h>
#include <string.h>

char traks[5][80] = {
	"Peremen",
	"Antoshka",
	"Tyger's eye",
	"Kukushka",
	"Vintovka eto"
};

void find_track(char search_for[]) {
	for (int i = 0; i < 5; i++)	{
	if (strstr(traks[i], search_for)) {
	   printf("Pesnya nomer %d: '%s'\n", i, traks[i]);
		}
	}
}

int main() {
	char search_for[80];
	printf("Poisk: ");
	fgets(search_for, 80, stdin);
	search_for[strlen(search_for)-1] = '\0';
	find_track(search_for);
	return 0;
}

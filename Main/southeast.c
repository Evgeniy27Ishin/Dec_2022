#include <stdio.h>
#include <conio.h>

void go_south_east(int *lat, int *lon)
{

	*lat = *lat - 1;
	*lon = *lon - 1;
}

int main()
{
	int latitube = 32;
	int longitube = -64;
	go_south_east(&latitube, &longitube);
	printf("Stop! Now our coordinates: [%d, %d]\n", latitube, longitube);
	getch();
  return 0;
}
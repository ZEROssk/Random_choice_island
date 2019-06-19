#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	char island[][256] = {"小豆島", "屋久島", "種子島", "軍艦島", "佐渡島"};
	int r;
	int c;

	for (;;) {
		srand(time(NULL));
		r = rand() % 5;

		if ((c = getchar()) == '\n') {
			printf("%d : %s\n", r, island[r]);
		} else {
			continue;
		}
	}

	return 0;
}


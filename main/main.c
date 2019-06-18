#include <stdio.h>

int main(void) {
	char island[5]={
		"小豆島",
		"屋久島",
		"種子島",
		"軍艦島",
		"佐渡島",
	}

	for (int i=0; i < 5; i++) {
		printf("%d\n", island[i][0]);
	}

	return 0;
}


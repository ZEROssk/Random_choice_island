#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char island[][256] = {"小豆島", "屋久島", "種子島", "軍艦島", "佐渡島"};
int island_cap[] = {6, 6, 6, 6, 6};
int rnum;
int rst;

int main(void) {
	for (;;) {
		srand(time(NULL));
		rnum = rand() % 5;

		printf("エンターキーを押してください\n r でリセット\n");

		rst = getchar();

		if (rst == '\n') {
			system("clear");
			if (island_cap[rnum] == 0) {
				printf("\n\n\n%s は満員です\n\n", island[rnum]);
				continue;
			}
			island_cap[rnum] -= 1;
			printf("\n\n\n%s に座りましょう 空席: %d\n\n", island[rnum], island_cap[rnum]);
		} else {
			system("clear");
			printf("test\n");
		}
	}

	return 0;
}


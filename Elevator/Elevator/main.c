#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<string.h>




void ChangeFloor(int currentFloor, int floors[]) {
	printf("\nWhat floor would you like to go to?\n");
	int target;
	int i;
	scanf("%d", &target);
	if (target > 15 || target < 0) {
		printf("\nPlease enter a valid number\n");
		ChangeFloor(currentFloor, floors);
	}
	else {
		for (i = (currentFloor + 1); i <= target; i++) {
			if (i != target) {
				printf("%d", floors[i]);
				printf(" ");
			}
			else if (i = target) {
				printf("%d", floors[i]);
				printf(" Ding!");

			}
		}

	}
}
void RepeatFloor(int currentFloor, int floors[]) {
	printf("\nWould you like to go to another floor?\n");
	printf("YES or NO\n");
	char str[3];
	scanf("%s", &str);

	if (strcmp(str, "YES") == 0) {
		ChangeFloor(currentFloor, floors);
	}
	if (strcmp(str, "NO") == 0) {

	}
	else {
		printf("\n Please enter either YES or NO");
		RepeatFloor(currentFloor, floors);
	}
}

void StartElevator() {
	int floors[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	int currentFloor = 0;
	printf("You are on floor ");
	printf("%d", currentFloor);
	ChangeFloor(currentFloor, floors);
}


int main() {
	int floors[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	int currentFloor = 0;
	printf("You are on floor ");
	printf("%d", currentFloor);
	ChangeFloor(currentFloor, floors);
	RepeatFloor(currentFloor, floors);
	return 0 ;
}



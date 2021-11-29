#include <stdio.h>
#include <string.h>

typedef struct member {
	char id[10];
	char password[10];
	char name[20];
	char birth[10];
	int num;
} Member;

void join(Member *members, int *index);
int validation(Member *members, Member candidate, int size);
void printMember(int seats[][10], Member member);
int findMember(Member *members, int size, char *id, char *password);
void reserve(int seats[][10], Member member);
void cancle(int seats[][10], Member member);
void change(int seats[][10], Member member);
int login(Member member[], int size);

void printSeats(int seats[][10]);
void initSeats(int seats[][10]);
int input(char *msg);

// entry point
int main(int argc, char *argv[]) {
	int size = 0;
	Member members[10];
	int seats[10][10];

	initSeats(seats);

	int cmd = 0;
	while (1) {
		printf("1. join\n");
		printf("2. find\n");
		printf("3. reserve\n");
		printf("4. print seats\n");
		printf("5. cancle seats\n");
		printf("6. change seats\n");
		printf("7. exit\n");
		scanf("%d", &cmd);

		if (cmd == 1) {
			join(members, &size);
		}
		else if (cmd == 2) {
			char id[10];
			char password[10];

			printf("id: ");
			scanf("%s", id);

			printf("password: ");
			scanf("%s", password);

			int i = findMember(members, size, id, password);
			if (i >= 0) {
				printMember(seats, members[i]);
				printSeats(seats);
			}
		}
		else if (cmd == 3) {
			int index = login(members, size);
			if (index > -1) {
				Member loginMember = members[index];
				reserve(seats, loginMember);
				printSeats(seats);
			}
			else {
				printf("fail to login\n");
			}
		}
		else if (cmd == 4) {
			printSeats(seats);
		}
		else if (cmd == 5) {
			int cancleindex = login(members, size);
			if (cancleindex > -1) {
				Member loginMember = members[cancleindex];
				cancle(seats, loginMember);
				printSeats(seats);
			}
			else {
				printf("fail to login\n");
			}
		}
		else if (cmd == 6) {
			int changeindex = login(members, size);
			if (changeindex > -1) {
				Member loginMember = members[changeindex];
				change(seats, loginMember);
				printSeats(seats);
			}
			else {
				printf("fail to login\n");
			}
		}
		else if (cmd == 7) {
			return 0;
		}
	}

	return 0;
}

void change(int seats[][10], Member member) {
	printSeats(seats);

	printf("your seats\n");
	int x = input("x: ");
	int y = input("y: ");

	printf("change seats\n");
	int x_check = input("x: ");
	int y_check = input("y: ");

	if (seats[y][x] == member.num) {
		if (seats[y_check][x_check] == -1) {
			seats[y][x] = -1;
			seats[y_check][x_check] = member.num;
		}
		else {
			printf("already reserved\n");
			return;
		}
	}
	else {
		printf("fail to change\n");
		return;
	}
}

void cancle(int seats[][10], Member member) {
	printSeats(seats);
	int x = input("x: ");
	int y = input("y: ");

	if (seats[y][x] == member.num) {
		seats[y][x] = -1;
	}
	else {
		printf("fail to cancle\n");
		return;
	}
}

int login(Member members[], int size) {
	char id[10];
	printf("id: "); scanf("%s", id);

	char password[10];
	printf("password: "); scanf("%s", password);

	int index = findMember(members, size, id, password);
	return index;
}

int input(char *msg) {
	int value;
	printf("%s", msg);
	scanf("%d", &value);
	return value;
}

void reserve(int seats[][10], Member member) {
	printSeats(seats);
	int x = input("x: ");
	int y = input("y: ");

	if (seats[y][x] > -1) {
		printf("already reserved\n");
		return;
	}

	seats[y][x] = member.num;
}

void printSeats(int seats[][10]) {
	printf("** printSeats() **\n");
	for (int y = 0; y < 10; y++) {
		for (int x = 0; x < 10; x++) {
			printf("%3d", seats[y][x]);
		}
		printf("\n");
	}
	printf("\n");
}

void initSeats(int seats[][10]) {
	for (int y = 0; y < 10; y++) {
		for (int x = 0; x < 10; x++) {
			seats[y][x] = -1;
		}
	}
}

int findMember(Member *members, int size, char *id, char *password) {
	printf("** findMember() **\n");
	for (int i = 0; i < size; i++) {
		if (strcmp(members[i].id, id) == 0 && strcmp(members[i].password, password) == 0) {
			return i;
		}
	}
	return -1;
}

void printMember(int seats[][10], Member member) {
	int checkseats = 0;
	printf("** printMember() **\n");
	printf("name: %s\n", member.name);
	printf("id: %s\n", member.id);
	printf("birth: %s\n", member.birth);
	printf("num: %d\n", member.num);
	for (int y = 0; y < 10; y++) {
		for (int x = 0; x < 10; x++) {
			if (seats[y][x] == member.num) {
				printf("seats: %d %d\n", x, y);
				checkseats++;
			}
		}
	}
	if (checkseats == 0) {
		printf("do not have reserve seats\n");
	}
}

void join(Member *members, int *size) {
	printf("** join() **\n");
	Member candidate;

	// input id
	printf("id: ");
	scanf("%s", candidate.id);

	// input password
	printf("password: ");
	scanf("%s", candidate.password);

	// input name
	printf("name: ");
	scanf("%s", candidate.name);

	// input birth
	printf("birth: ");
	scanf("%s", candidate.birth);

	int isValid = validation(members, candidate, *size);
	if (isValid) {
		// members[*index] = candidate;
		strcpy(members[*size].id, candidate.id);
		strcpy(members[*size].password, candidate.password);
		strcpy(members[*size].name, candidate.name);
		strcpy(members[*size].birth, candidate.birth);
		members[*size].num = *size;
		(*size)++;
	}
	if (isValid == 0) {
		printf("fail\n");
	}
}

int validation(Member *members, Member candidate, int size) {
	printf("** validation() **\n");
	for (int i = 0; i < size; i++) {
		if (strcmp(members[i].id, candidate.id) == 0) {
			return 0;
		}
	}
	return 1;
}
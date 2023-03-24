#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(NULL));

	int magic_num = 0;
	//bool win = false;
	int chose = 0;
	int heart = 0;
	int num = 0;
	int level = 0;
	bool win = false;
	cout << "Выберите уровень сложности:\n1 - Easy\n2 - Hard\n";
	cin >> chose;
	switch (chose) {
	case 1:
		magic_num = 1 + rand() % 10;
		heart = 5;
		level = 1;
		break;
	case 2:
		magic_num = 10 + rand() % 90;
		heart = 25;
		level = 2;
		break;
	default:
		break;
	}
	chose = 0;
	system("cls");
	do {
		cout << "\nВведите число:\n";
		cin >> num;
		if (num != magic_num) {
			cout << "\nХотите воспользоваться подсказкой ?\n1 - Да.\n2 - Нет.\n";
		}
		if (num == magic_num) {
			cout << "\nВы выиграли!!!\n";
			if (level == 1) {
				heart = heart * 5;
			}
			if (level == 2) {
				heart = heart * 10;
			}
			cout << "\nКоличество очков: " << heart;
			win == true;
			break;
		}
		cin >> chose;
		switch (chose) {
		case 1:
			if (num > magic_num) {
				cout << "Ваше число больше\n";
				heart--;
			}
			else {
				cout << "Ваше число меньше\n";
				heart--;
			}
			break;
		default:
			system("cls");
			break;
		}
		if (heart == 0) {
			cout << "\nВы проиграли\n";
			win = true;
			break;
		}
	} while (win != true);

}

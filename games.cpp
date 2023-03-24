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
	int speed = 0;
	int line = 0;
	char sym;
	int choose = 0;
	cout << "Задание 1\n\n";
	cout << "Введите скорость:\n1 - fast\n2 - medium\n3 - slowly\n";
	cin >> choose;

	cout << "\nВведите символ:\n";
	cin >> sym;

	cout << "\nЛиния:\n1 - Горизонтальная\n2 - Вертикальная\n";
	cin >> line;

	switch (choose) {
	case 1:
		speed = 100;
		break;
	case 2:
		speed = 250;
		break;
	case 3:
		speed = 500;
		break;
	default:
		speed = 100;
		break;
	}

	cout << "\n";
	switch (line) {
	case 1:
		for (int i = 0; i < 6; i++) {
			Sleep(speed);
			cout << sym << " ";
		}
		break;
	case 2:
		for (int i = 0; i < 6; i++) {
			Sleep(speed);
			cout << sym << "\n";
		}
		break;
	default:
		for (int i = 0; i < 6; i++) {
			Sleep(speed);
			cout << sym << " ";
		}
		break;
	}
	cout << "\n\nЗадание 2\n\n";

	int bone = 0;
	int boner = 0;
	int player = 0;
	int bot = 0;
	choose = 0;
	int count = 0;
	cout << "Это игра в кости!!!\n";

	do {
		cout << "\n1 - Бросить кости\n2 - Выйти\n";
		cin >> choose;
		switch (choose) {
		case 1:
			system("cls");
			bone = 1 + rand() % 6;
			boner = 1 + rand() % 6;
			player += bone;
			bot += boner;
			cout << "\n";
			if (bone == 1) {
				cout << "Вам выпало\n";
				cout << "#############\n";
				cout << "#           #\n";
				cout << "#           #\n";
				cout << "#     #     #\n";
				cout << "#           #\n";
				cout << "#           #\n";
				cout << "#############\n";
			}
			if (bone == 2) {
				cout << "Вам выпало\n";
				cout << "#############\n";
				cout << "#           #\n";
				cout << "#     #     #\n";
				cout << "#           #\n";
				cout << "#     #     #\n";
				cout << "#           #\n";
				cout << "#############\n";
			}
			if (bone == 3) {
				cout << "Вам выпало\n";
				cout << "#############\n";
				cout << "#           #\n";
				cout << "#  #        #\n";
				cout << "#     #     #\n";
				cout << "#        #  #\n";
				cout << "#           #\n";
				cout << "#############\n";
			}
			if (bone == 4) {
				cout << "Вам выпало\n";
				cout << "#############\n";
				cout << "#           #\n";
				cout << "#  #     #  #\n";
				cout << "#           #\n";
				cout << "#  #     #  #\n";
				cout << "#           #\n";
				cout << "#############\n";
			}
			if (bone == 5) {
				cout << "Вам выпало\n";
				cout << "#############\n";
				cout << "#           #\n";
				cout << "#  #     #  #\n";
				cout << "#     #     #\n";
				cout << "#  #     #  #\n";
				cout << "#           #\n";
				cout << "#############\n";
			}
			if (bone == 6) {
				cout << "Вам выпало\n";
				cout << "#############\n";
				cout << "#  #     #  #\n";
				cout << "#           #\n";
				cout << "#  #     #  #\n";
				cout << "#           #\n";
				cout << "#  #     #  #\n";
				cout << "#############\n";
			}
			cout << "\n";
			if (boner == 1) {
				cout << "Роботу выпало\n";
				cout << "#############\n";
				cout << "#           #\n";
				cout << "#           #\n";
				cout << "#     #     #\n";
				cout << "#           #\n";
				cout << "#           #\n";
				cout << "#############\n";
			}
			if (boner == 2) {
				cout << "Роботу выпало\n";
				cout << "#############\n";
				cout << "#           #\n";
				cout << "#     #     #\n";
				cout << "#           #\n";
				cout << "#     #     #\n";
				cout << "#           #\n";
				cout << "#############\n";
			}
			if (boner == 3) {
				cout << "Роботу выпало\n";
				cout << "#############\n";
				cout << "#           #\n";
				cout << "#  #        #\n";
				cout << "#     #     #\n";
				cout << "#        #  #\n";
				cout << "#           #\n";
				cout << "#############\n";
			}
			if (boner == 4) {
				cout << "Роботу выпало\n";
				cout << "#############\n";
				cout << "#           #\n";
				cout << "#  #     #  #\n";
				cout << "#           #\n";
				cout << "#  #     #  #\n";
				cout << "#           #\n";
				cout << "#############\n";
			}
			if (boner == 5) {
				cout << "Роботу выпало\n";
				cout << "#############\n";
				cout << "#           #\n";
				cout << "#  #     #  #\n";
				cout << "#     #     #\n";
				cout << "#  #     #  #\n";
				cout << "#           #\n";
				cout << "#############\n";
			}
			if (boner == 6) {
				cout << "Роботу выпало\n";
				cout << "#############\n";
				cout << "#  #     #  #\n";
				cout << "#           #\n";
				cout << "#  #     #  #\n";
				cout << "#           #\n";
				cout << "#  #     #  #\n";
				cout << "#############\n";
			}
			count++;
			if (count == 3) {
				cout << "У вас " << player << endl;
				cout << "У робота " << bot << endl;
				Sleep(500);
				if (player > bot) {
					cout << "\nВы выиграли!!!\n";
				}
				else if (player == bot) {
					cout << "\nНичья!!!\n";
				}
				else {
					cout << "\nБот выиграл!!!\n";
				}
				cout << "Можете играть дальше...\n";
				Sleep(2000);
				system("cls");
				count = 0;
				player = 0;
				bot = 0;
			}
			break;
		case 2:
			system("cls");
			cout << "Пока-пока!!!\n";
			break;
		}
	} while (choose != 2);
	cout << "\n\nЗадание 3\n\n";// Дополненная версия (4) в файле game4.cpp на github

	int magic_num = 0;
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
	} while (win != true); // Дополненная версия (4) в файле game4.cpp на github
}

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
	cout << "\n\nЗадание 3\n\n";

}

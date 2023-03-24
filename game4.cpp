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

	int magic_num = 0; magic_num = 1 + rand() % 10;
	int chose = 0; int num = 0; int round = 1;
	int heart = 5; int level = 1; int bot = 0;
	int points = 0;
	bool win = false;


	do {
		cout << "\nРаунд: " << round << "\nУровень: " << level;
		cout << "\nВведите число:\n";

		cin >> num;

		if (num != magic_num) {
			cout << "\nХотите воспользоваться подсказкой ?\n1 - Да.\n2 - Нет.\n";
			cin >> chose;
		}

		if (num == magic_num) {

			if (level == 1) {
				points = points + (heart * 5);
			}
			if (level == 2) {
				points = points + (heart * 10);
			}
			cout << "\nВы выиграли " << round << " раунд!!!\n";
			cout << "Количество очков: " << points << "\n";

			if (level == 2 && round == 2) {
				cout << "\nВы победили!!!\n";
				break;
			}

			round++;
			if (level == 1) {
				heart = 5;
			}

			if (level == 2) {
				heart = 25;
			}

			cout << "\nКоличество очков: " << heart << "\n";

			if (level == 1 && round > 3) {
				level++;
				round = 1;
				cout << "\nВы перешли на новый уровень!!!\n";
				heart = 25;
			}

			cout << "Желаете продолжить ?\n1 - Да.\n2 - Нет.\n";
			cin >> chose;
			switch (chose) {
			case 1:
				if (level == 1) {
					magic_num = 1 + rand() % 10;
					cout << "\nПродолжаем!\n";
					chose = 2;
				}
				if (level == 2) {
					magic_num = 10 + rand() % 90;
					chose = 2;
				}
				break;
			default:
				break;
			}
		}
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
			break;
		}
		if (heart == 0) {
			cout << "\nВы проиграли\n";
			if (level == 1) {
				bot = bot + (heart * 5);
			}
			if (level == 2) {
				bot = bot + (heart * 10);
			}
			cout << "\nУ робота: " << bot << "Очков\n";
			win = true;
			break;
		}
	} while (win != true);

}

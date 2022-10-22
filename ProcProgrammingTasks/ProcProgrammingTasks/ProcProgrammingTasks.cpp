#include <iostream>
#include <iomanip>
#include <locale.h>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <conio.h>
#include <cmath>
#include <fstream>
#include <ctime>

#include "consolecolors.h"
#include "Table.h"
#include "functions.h"

using namespace std;

const double pi = 3.14159;
const double e = 2.71828;

string dz_list_names[2][32] = {
	{"1-1", "1-2", "1-3", "1-4", "1-5",
	"2-1", "2-2", "2-3", "2-4", "2-5",
	"3-1", "3-2", "3-3", "3-4", "3-5",
	"4-1", "4-2", "4-3", "4-4", "4-5",
	"4-6", "4-7", "4-8", "4-9",
	"5-1", "5-2", "5-3", "5-4", "5-5", "5-6", "5-7",
	"6-1"},
	{"Имя", "Калькулятор", "Уравнение: bx + c = 0", "Уравнение: ax^2 + bx + c = 0", "Лампочка и шторы",
	"Конус", "Разветвление", "Функция z = ln (b - y) * sqrt (b - x)", "Порядок", "Табуляция функции y = (x^2 - 2x + 2) / (x - 1)",
	"Займ", "Процент займа", "Файлы", "Фильтр", "Сортировка",
	"Файл с числами", "Знак числа", "Площадь", "Флаг США", "Синусоида",
	"Римские цифры", "\"Случайные\" числа", "Про продавцов", "Системы счисления",
	"Алгоритм Евклида", "Решето Эратосфена", "Обработка текстовых файлов 1", "Обработка текстовых файлов 2", "Ряды 1", "Ряды 2", "Файлы",
	"Шарики"}
};

void f1_1();
void f1_2();
void f1_3();
void f1_4();
void f1_5();
void f2_1();
void f2_2();
void f2_3();
void f2_4();
void f2_5();
void f3_1();
void f3_2();
void f3_3();
void f3_4();
void f3_5();
void f4_1();
void f4_2();
void f4_3();
void f4_4();
void f4_5();
void f4_6();
void f4_7();
void f4_8();
void f4_9();
void f5_1();
void f5_2();
void f5_3();
void f5_4();
void f5_5();
void f5_6();
void f5_7();
void f6_1();

void main_menu()
{

	setlocale(LC_ALL, "Russian");
	string input;
	int widths[5] = { 5, 50, -1, -1, -1 };
	table::Table dz_list(2, 33, widths, "Список заданий:", 14);
	dz_list.set_data(0, 0, "Номер", 0, 13);
	dz_list.set_data(0, 1, "Название задания", 0, 13);
	for (int i = 1; i < 33; i++)
	{
		dz_list.set_data(i, 0, dz_list_names[0][i - 1], 0, 13);
		dz_list.set_data(i, 1, dz_list_names[1][i - 1], 0, 15);
	}
	while (1)
	{
		system("color 0f");
		system("cls");
		SetColor(0, 11);
		cout << "****   ***  ***  ****  *   *  ***  *****       *   * ***** *   * *  ** " << endl;
		cout << "*     *  * *   * *   * *   * *   * *           ** ** *     *   * * *  *" << endl;
		cout << "*     *  * *   * *   * *   * *   * *           * * * *     *   * * *  *" << endl;
		cout << "*     *  * ***** ****  ***** *   * ****        *   * ****  ***** ***  *" << endl;
		cout << "*     *  * *   * *   * *   * *   * *           *   * *     *   * * *  *" << endl;
		cout << "*     *  * *   * *   * *   * *   * *           *   * *     *   * * *  *" << endl;
		cout << "*    **  * *   * ****  *   *  ***  *****       *   * ***** *   * *  ** " << endl;
		SetColor(0, 15);
		cout << "Введите номер задания (например 1-1) или list для вывода списка заданий.\nВведите 0-0 чтобы выйти." << endl;
		SetColor(0, 12);
		cout << "ВАЖНО!";
		SetColor(0, 15);
		cout << " При вводе чисел в программах дробные числа писать через запятую!\n";

		cin >> input;
		if (input == "0-0")
		{
			break;
		}
		else if (input == "1-1")
		{
			f1_1();
		}
		else if (input == "1-2")
		{
			f1_2();
		}
		else if (input == "1-3")
		{
			f1_3();
		}
		else if (input == "1-4")
		{
			f1_4();
		}
		else if (input == "1-5")
		{
			f1_5();
		}
		else if (input == "2-1")
		{
			f2_1();
		}
		else if (input == "2-2")
		{
			f2_2();
		}
		else if (input == "2-3")
		{
			f2_3();
		}
		else if (input == "2-4")
		{
			f2_4();
		}
		else if (input == "2-5")
		{
			f2_5();
		}
		else if (input == "3-1")
		{
			f3_1();
		}
		else if (input == "3-2")
		{
			f3_2();
		}
		else if (input == "3-3")
		{
			f3_3();
		}
		else if (input == "3-4")
		{
			f3_4();
		}
		else if (input == "3-5")
		{
			f3_5();
		}
		else if (input == "4-1")
		{
			f4_1();
		}
		else if (input == "4-2")
		{
			f4_2();
		}
		else if (input == "4-3")
		{
			f4_3();
		}
		else if (input == "4-4")
		{
			f4_4();
		}
		else if (input == "4-5")
		{
			f4_5();
		}
		else if (input == "4-6")
		{
			f4_6();
		}
		else if (input == "4-7")
		{
			f4_7();
		}
		else if (input == "4-8")
		{
			f4_8();
		}
		else if (input == "4-9")
		{
			f4_9();
		}
		else if (input == "5-1")
		{
			f5_1();
		}
		else if (input == "5-2")
		{
			f5_2();
		}
		else if (input == "5-3")
		{
			f5_3();
		}
		else if (input == "5-4")
		{
			f5_4();
		}
		else if (input == "5-5")
		{
			f5_5();
		}
		else if (input == "5-6")
		{
			f5_6();
		}
		else if (input == "5-7")
		{
			f5_7();
		}
		else if (input == "6-1")
		{
			f6_1();
		}
		else if (input == "list")
		{
			dz_list.show();
		}
		else {
			cout << "Неверный ввод" << endl;
		}
		system("pause");
	}
}
int main(int argc, char* argv[])
{
	srand(time(NULL));
	main_menu();
	return 0;
}

void f1_1(){ }
void f1_2(){ }
void f1_3(){ }
void f1_4(){ }
void f1_5(){ }
void f2_1(){ }
void f2_2(){ }
void f2_3(){ }
void f2_4(){ }
void f2_5(){ }
void f3_1(){ }
void f3_2(){ }
void f3_3(){ }
void f3_4(){ }
void f3_5(){ }
void f4_1(){ }
void f4_2(){ }
void f4_3(){ }
void f4_4(){ }
void f4_5(){ }
void f4_6(){ }
void f4_7(){ }
void f4_8(){ }
void f4_9(){ }
void f5_1(){ }
void f5_2(){ }
void f5_3(){ }
void f5_4(){ }
void f5_5(){ }
void f5_6(){ }
void f5_7(){ }
void f6_1(){ }
/*
 Стандартная библиотека С++. Итераторы. Вектор. Алгоритмы.
Предикаты. Функторы.
1. Дан вектор, хранящий целые числа. Необходимо удалить из вектора все
отрицательные числа.
 */

// ГОТОВО

#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	srand(time(NULL));

	const int min{ -100 };
	const int max{ 100 };

	// Создание пустого вектора.
	vector<int> v;

	// Заполнение вектора элементами.
	for (int i = 0; i < 10; i++)
	{
		int r = rand() % (max - min + 1) + min;
		v.push_back(r);
	}

	// Вывод векторов.
	ostream_iterator<int> out(cout, " ");
	cout << "Vector v: ";
	copy(v.begin(), v.end(), out);
	cout << endl;

	v.erase(remove_if(v.begin(), v.end(), bind2nd(less<int>(), 0)), v.end());

	// Вывод векторов.
	cout << "Vector v: ";
	copy(v.begin(), v.end(), out);
	cout << endl;
}
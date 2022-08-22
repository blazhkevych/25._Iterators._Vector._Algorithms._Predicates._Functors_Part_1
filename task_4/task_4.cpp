/*4. Даны два вектора различной размерности: А[M] и B[N]. Необходимо
создать третий вектор, в котором нужно собрать элементы вектора A,
которых нет в векторе B. */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	srand(time(NULL));

	const int min{ 1 };
	const int max{ 10 };

	// Создание пустого вектора.
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;

	// Заполнение вектора элементами.
	for (int i = 0; i < 10; i++)
	{
		int r = rand() % (max - min + 1) + min;
		v1.push_back(r);
	}
	// Вывод векторов.
	const ostream_iterator<int> out(cout, " ");
	cout << "Vector v1: ";
	copy(v1.begin(), v1.end(), out);
	cout << endl << endl;

	// Заполнение вектора элементами.
	for (int i = 0; i < 5; i++)
	{
		int r = rand() % (max - min + 1) + min;
		v2.push_back(r);
	}
	// Вывод векторов.
	cout << "Vector v2: ";
	copy(v2.begin(), v2.end(), out);
	cout << endl << endl;



	//sort(v1.begin(), v1.end());
	//sort(v2.begin(), v2.end());



	// remove consecutive (adjacent) duplicates
	auto last = std::unique(v3.begin(), v3.end());
	// v now holds {1 2 1 3 4 5 4 x x x}, where 'x' is indeterminate
	v3.erase(last, v3.end());

	// Вывод векторов.
	cout << "Vector v3: ";
	copy(v3.begin(), v3.end(), out);
	cout << endl << endl;

	// sort followed by unique, to remove all duplicates
	std::sort(v3.begin(), v3.end()); // {1 1 2 3 4 4 5}
	// Вывод векторов.
	cout << "Vector v3: ";
	copy(v3.begin(), v3.end(), out);
	cout << endl << endl;

	last = std::unique(v3.begin(), v3.end());
	// v now holds {1 2 3 4 5 x x}, where 'x' is indeterminate
	v3.erase(last, v3.end());
	// Вывод векторов.
	cout << "Vector v3: ";
	copy(v3.begin(), v3.end(), out);
	cout << endl << endl;


	// Вывод векторов.
	cout << "Vector v3: ";
	copy(v3.begin(), v3.end(), out);
	cout << endl << endl;
}
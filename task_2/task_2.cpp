/*2. Даны два вектора различной размерности: А[M] и B[N]. Необходимо
создать третий вектор, в котором нужно собрать элементы первых двух
векторов.*/
// ГОТОВО

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	srand(time(NULL));

	const int min{ -100 };
	const int max{ 100 };

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
	ostream_iterator<int> out(cout, " ");
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

	v3.insert(v3.end(), v1.begin(),v1.end());
	v3.insert(v3.end(), v2.begin(),v2.end());

	// Вывод векторов.
	cout << "Vector v3: ";
	copy(v3.begin(), v3.end(), out);
	cout << endl << endl;

}
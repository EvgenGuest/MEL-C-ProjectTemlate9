//ѕерсональный шаблон проекта —++
#include <iostream>
using namespace std;

void func(int* pn1, int* pn2) {
	if (pn1 == nullptr || pn2 == nullptr)
		cout << "ќдин из указателей нейтрален\n";
	else {
		cout << "pn1 = " << pn1 << endl;
		cout << "pn2 = " << pn2 << endl;
	}
}

void mySwap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void pSwap(int* num1, int* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
// ‘ункци€ принимающа€ 2 переменные и мен€юща€ их значени€ местами
void refSwap(int& num1, int& num2) { // int &num1 =x
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int x, y;
	cout << "¬ведите два числа: ";
	cin >> x >> y;
	//mySwap(x, y);
	//pSwap(&x, &y);
	refSwap(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	int n = pow(2, 2);










	/*int a = 10, b = 20;
	int *pa = &a;
	cout << pa << endl;
	int &refa = a;
	cout << refa << endl;
	refa = 15;
	cout << a << endl;
	b += refa;
	cout << b << endl;*/




	/*int n = 10, m = 20;
	int arr[3] = { 1, 2, 3 };
	arr = &n; //arr - указатель-константа на нулевой элемент массива*/

	//  онстантный указатель на константу. ”казатель который всегда указывает на одну €чеку в ќѕб, при этом мен€ть ее значени€ мен€ть через указатель нельз€.
	/*const int* const pn = &n;
	cout << pn << " = " << *pn << endl;*/

	// ”казатель на константу. ”казатель, который запрещает изменени€ переменной, адрес которой в нем записан. ѕри этом сам указатель можно перенаправить на другую €чейку в ќѕ. 
	/*const int* pn;
	pn = &n;
	cout << pn << " = " << *pn << endl;
	pn = &m;
	cout << pn << " = " << *pn << endl;*/

	//”казатель - константа. ”казатель который всегда указывает на  одну €чейку в оперативной пам€ти ѕ . не может быть перенаправлен на другие €чейки
	/*int* const pn = &n;
	cout << pn << " = " << *pn << endl;
	*pn = 15;
	cout << pn << " = " << *pn << endl;*/

	/*int n, m;

	int* pn = &n;
	int* pm = &m;

	func(pn, pm);*/

	/*int n = -1;
	if (n != -1)
		cout << n <<endl;
	cin >> n;
	cout << n << endl;

	int *pn = nullptr;
	pn = &n;
	if(pn != nullptr)
		cout << pn << endl;*/


	

	return 0;
}

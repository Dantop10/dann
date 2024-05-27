#include <iostream>
#include <string>
#include <regex>
#include <fstream>
#include <vector>
#include <set>
#include <map>

using namespace std;
string getContent(const string& filename) {
	ifstream fin;
	fin.open(filename);
	if (!fin.is_open()) {
		return "";
	}
	string text((istreambuf_iterator<char>(fin)), (istreambuf_iterator<char>()));
	return text;
}
int main() {
	regex rgx("[a-zA-Z_][a-zA-Z0-9_]*@[a-z]+\.[a-z]+");
	string text = getContent("text.txt");
	smatch m;
	map<string, int> aga;
	while (regex_search(text, m, rgx)) {
		string email = m.str();
		aga.count(email) ? aga[email]++ : aga[email] = 1;
		text = m.suffix().str();
	}
	for (auto& e : aga) {
		cout << e.first << " : " << e.second << endl;
	}
}
/*int main() {

	set<int> setA = { 1,3,4,5,7 };
	set<int> setB = { 0,2,3,5,4 };
	set<int> setC;

	set_symmetric_difference(setA.begin(), setA.end(),
		setB.begin(), setB.end(), inserter(setC, setC.begin()));

	for (const int& n : setC) {
		cout << n << '\t';
	}
	cout << endl;
}*/
// Функция сравнения строк для сортировки
/*bool compare(string a, string b) {
	return a < b;
}

// Функция сортировки пузырьком для массива строк
void bubbleSort(vector<string>& arr) {
	int n = arr.size();
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (!compare(arr[j], arr[j + 1])) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;

	vector<string> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// Сортировка массива строк
	bubbleSort(arr);

	// Вывод отсортированных строк
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}*/
/*int main() {
	setlocale(LC_ALL, "rus");

	int digitals[10]; // объявили массив на 10 ячеек

	cout << "Введите 10 чисел для заполнения массива: " << endl;

	for (int i = 0; i < 10; i++) {
		cin >> digitals[i]; // "читаем" элементы в массив
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (digitals[j] > digitals[j + 1]) {
				int b = digitals[j]; // создали дополнительную переменную
				digitals[j] = digitals[j + 1]; // меняем местами
				digitals[j + 1] = b; // значения элементов
			}
		}
	}

	cout << "Массив в отсортированном виде: ";

	for (int i = 0; i < 10; i++) {
		cout << digitals[i] << " "; // выводим элементы массива
	}
	system("pause");
	return 0;
}*/
/*
using namespace std;
string getContents(string filename = "file.txt") {
	fstream fin;
	fin.open(filename);
	if (!fin.is_open()) {
		fin.close();
		return "";
	}
	string text((istreambuf_iterator<char>(fin)),
		(istreambuf_iterator<char>()));
		return text;
}*/
//using namespace std;
//vector<int> Func(vector<int>& v) {
//vector<int> res(v.size(), 0);
//for (int i = 0, i < res(v.size(), i++)) {

//}
//return res;
//}

//int main() {
	//vector<int> v{ 13, 12, 15, 11, 9, 12, 16 };

//}
/*int main() {
	regex rgx("[0-9]+");
	smatch m;
	string str("текст123 456");
	vector<string> v;
	while (regex_search(str, m, rgx)) {
		v.push_back(m.str());
		s = m.suffix().str();
	}
	for (const auto& e : v) {
		cout << e << endl;
	}
	cout << endl;
}  
*/
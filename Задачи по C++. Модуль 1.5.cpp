//-----Решенные задачи по модулю "1.5 Цикл while" -----//

#include <iostream>

using namespace std;


// Квадраты натуральных чисел
/*
int main()
{
    int i,N;
    cin >> N;
    i = 1;
    while (i * i <= N) {
        cout << i * i << " ";
        i = i + 1;
    }
}
*/

// Наименьший натуральный делитель
/*
int main()
{
    int i,N;
    cin >> N;
    i = 2;
    while (N % i != 0) {
        i = i + 1;
    }
    cout << i;
}
*/

// Степени двойки
/*
int main()
{
    int i, N;
    cin >> N;
    i = 1;
    while (i <= N) {
        cout << i << " ";
        i = i*2;
    }
}
*/

// Проверка точной степени двойки
/*
int main()
{
    int N;
    cin >> N;
    while (N % 2 == 0) {
        N = N / 2;
    }
    if (N == 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
*/

// Количество элементов последовательности
/*
int main()
{
    int N, i;
    cin >> N;
    i = 0;
    while (N != 0) {
        cin >> N;
        i = i + 1;
    }
    cout << i;
}
*/

// Сумма элементов последовательности
/*
int main()
{
    int N, sum;
    cin >> N;
    sum = N;
    while (N != 0) {
        cin >> N;
        sum = sum + N;
    }
    cout << sum;
}
*/

// Наибольший элемент последовательности
/*
int main()
{
    int N;
    cin >> N;
    int max = N;
    while (N != 0) {
        cin >> N;
        if (N > max) {
            max = N;
        }
    }
    cout << max;
}
*/

// Количество наибольших элементов последовательности
/*
int main()
{
    int N,i;
    cin >> N;
    i = 1;
    int max = N;
    while (N != 0) {
        cin >> N;
        if (N > max) {
            max = N;
            i = 1;
        }
        else if (N == max) {
            i = i + 1;
            }
    }
    cout << i;
}
*/

// Второй по величине элемент последовательности
/*
int main()
{
    int N;
    int max1 = 0;
    int pr_max = 0;
    while (cin >> N && N != 0) {
        if (N >= max1) {
            pr_max = max1;
            max1 = N;
        }
        else if (N > pr_max) {
            pr_max = N;
        }
    }
    std::cout << pr_max;
}
*/

// Последовательность Фибоначчи - 1
/*
int main()
{
	int n, ff0, i = 1, f = 1, f0 = 0;
    cin >> n;
    while (i < n) {
        ff0 = f;
        f = f0 + f;
        f0 = ff0;
        i = i + 1;
}
    cout << f;
}
*/

// Последовательность Фибоначчи - 2
/*
int main() { 
    int F0=0,F1=1,A,Fn=0,n=1;
    cin >> A;
    while(Fn < A) { 
        Fn = F0 + F1;
        F0 = F1;
        F1 = Fn;
        n++;
    }
    if (A == Fn) cout << n;
    else cout << -1;
    return 0;
}
*/

// Наибольшее число подряд идущих элементов последовательности
/*
int main() {

	int n, m, i = 0, j = 0;
	cin >> n;

	while (n != 0) {
		m = n;
		while (m == n) cin >> n, i++;
		if (i > j) j = i;
		i = 0;
	}

	cout << j;
	
	return 0;
}
*/

// Локальный максимум последовательности
/*
int main() {
	int a = 0, b = 0, c = 0, n;

	while (cin >> n && n != 0) {
		if (a > 0 && a < b && b > n)
			c++;
		a = b; b = n;
	}

	cout << c;
	return 0;
}
*/

// Расстояние между двумя локальными максимумами
/*
int main() {
	int a, b, c, n = 0, x = 0;
	cin >> a >> b >> c;
	while (c != 0) {
		if (a < b && b > c) {
			if (x == 0) x = n, n = 1;
			else if (x >= n) x = n, n = 1;
			else n = 1;
		}
		else if (n > 0)  n = n + 1; 
		a = b, b = c;
		cin >> c;
	}
	cout << x;
	return 0;
}
*/
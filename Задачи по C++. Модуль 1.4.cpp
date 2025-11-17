//-----Решенные задачи по модулю "1.4 Условный оператор" -----//

#include <iostream>

using namespace std;


// Наибольшее из двух - 1
/*
int main()
{
	int a,b;
	cin >> a >>b;
	if (a > b) {
		cout << a;
	}
	if (a < b) {
		cout << b;
	}
	if (a == b) {
		cout << a;
	}
}
*/

// Наибольшее из двух - 1
/*
int main()
{
	int a,b;
	cin >> a >> b;
	if (a > b) {
		cout << 1;
	}
	if (a < b) {
		cout << 2;
	}
	if (a == b) {
		cout << 0;
	}
}
*/

// Наибольшее из трех
/*
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a >= b and a >= c) {
		cout << a;
	}
	else if  (b >= a and b >= c) {
		cout << b;
	}
	else if (c >= a and c >= b) {
		cout << c;
	}
	else {
		cout << a;
	}
}
*/

// Треугольник A,B,C
/*
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a < c and b < c and a + b > c) {
		cout << "YES";
	}
	else if  (a < b and c < b and a + c > b) {
		cout << "YES";
	}
	else if (c < a and b < a and b + c > a) {
		cout << "YES";
	}
	else if (a == b and a == c and b == c) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
*/

// Совпадение среди трех чисел
/*
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a == c and b == c and a == c) {
		cout << "3";
	}
	else if  ((a == b or a == c ) or (b == a or b == c) or (c == a or c == b)) {
		cout << "2";
	}
	else {
		cout << "0";
	}
}
*/

// Ход шахматной ладьи
/*
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a == c and b != d) or (b == d and a != c)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    } 
}
*/

// Ход шахматного короля
/*
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((c == a - 1 and b == d) or (c == a - 1 and d == b + 1) or (c == a and d == b + 1) or (c == a + 1 and d == b + 1) or (c == a + 1 and d == b) or (c == a + 1 and d == b - 1) or (c == a and d == b - 1) or (c == a - 1 and d == b - 1) ) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
*/

// Ход шахматного слона
/*
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (abs(c - a) == abs(d - b)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
*/

// Ход шахматного ферзя
/*
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((abs(c - a) == abs(d - b)) or (a == c ) or (b == d)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
*/

// Ход шахматного коня
/*
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((abs(a - c) == 2 and abs(b - d) == 1) or (abs(a - c) == 1 and abs(b - d) == 2)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
*/

// Шоколадка MxN
/*
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if ((n == k or k % n == 0 and k <= n * m - n) or (m == k or k % m == 0 and k <= n * m - m)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
*/

// Яша и бассейн MxN
/*
int main() {
  int n, m, x, y;
    cin >> n >> m >> x >> y;
    if (n > m) {
        n = n + m;
        m = n - m;
        n = n - m;
    }
    if (2 * x > n) {
        x = n - x;
    }
    if (2 * y > m) {
        y = m - y;
    }
    if (x < y) {
        cout << x;
    } else {
        cout << y;
    }
  return 0;
}
*/

// Упорядочить три числа по неубыванию
/*
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a <= b && a <= c) {
        if (b <= c) {
            cout << a << " " << b << " " << c;
        } else {
            cout << a << " " << c << " " << b;
        }
    } else if (b <= a && b <= c) {
        if (a <= c) {
            cout << b << " " << a << " " << c;
        } else {
            cout << b << " " << c << " " << a;
        }
    } else {
        if (a <= b) {
            cout << c << " " << a << " " << b;
        } else {
            cout << c << " " << b << " " << a;
        }
    }
    
    return 0;
}
*/

// Коробки 
/*
int main() {
    int a, b, c, x, y, z, t;
    cin >> a >> b >> c >> x >> y >> z;
    if (a > b) t = a, a = b, b = t;
    if (b > c) t = b, b = c, c = t;
    if (a > b) t = a, a = b, b = t;
    if (x > y) t = x, x = y, y = t;
    if (y > z) t = y, y = z, z = t;
    if (x > y) t = x, x = y, y = t;
    if (a == x && b == y && z == c) cout << "Boxes are equal";
    else if (a <= x && b <= y && c <= z) cout << "The first box is smaller than the second one";
    else if (a >= x && b >= y && c >= z) cout << "The first box is larger than the second one";
    else cout << "Boxes are incomparable";
    return 0;
}
*/
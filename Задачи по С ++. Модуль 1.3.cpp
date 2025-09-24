//-----Решенные задачи по модулю "1.3 Целые числа" -----//

#include <iostream>
#include <iomanip>

using namespace std;


// Белочки и орешки - 1
/*
int main() {
    int n, k;
    cin >> n >> k;
    cout << k / n;
    return 0;
}
*/

// Белочки и орешки - 2
/*
int main() {
    int n, k;
    cin >> n >> k;
    cout << k % n;
    return 0;
}
*/

// Последняя цифра
/*
int main() {
    int n;
    cin >> n;
    cout << n % 10;
    return 0;
}
*/

// Первая цифра двузначного числа
/*
int main() {
    int n;
    cin >> n;
    cout << n / 10;
    return 0;
}
*/

// Число десятков
/*
int main() {
    int n,k;
    cin >> n;
    k = n / 10;
    cout << k % 10;
    return 0;
}
*/

// Сумма цифр трехзначного числа
/*
int main() {
    int n, k;
    cin >> n;
    k = n / 10;
    cout << n / 100 + k % 10 + n % 10;
    return 0;
}
*/

// Следующее четное
/*
int main() {
    int n, k;
    cin >> n;
    k = n % 2;
    cout << n + 2 - k;
    return 0;
}
*/

// Парты
/*
int main() {
    int n, m, k,x,y,z;
    cin >> n >> m >> k;
    x = n % 2;
    y = m % 2;
    z = k % 2;
    cout << (n / 2 + x) + (m / 2 + y) + (k / 2 + z);
    return 0;
}
*/

// Покупка пирожков
/*
int main() {
    int a, b, n, all_cop;
    cin >> a >> b >> n;

    //Все в копейках
    all_cop = n * (a * 100 + b);

    //В рублях вывод
    cout << all_cop / 100 << " " << all_cop % 100;
    return 0;
}
*/

// Электронные часы
/*
int main() {
    int n, h, mm, ss;
    cin >> n;
    h = (n / 3600) % 24;
    mm = (n / 60) % 60;
    ss = n % 60;

    cout << h << ":"
        << setw(2) << setfill('0') << mm << ":"
        << setw(2) << setfill('0') << ss;
    return 0;
}
*/

// Разность времен
/*
int main() {
    int h1, mm1, ss1, h2, mm2, ss2, time1, time2;
    cin >> h1 >> mm1 >> ss1 >> h2 >> mm2 >> ss2;

    time1 = h1 * 3600 + mm1 * 60 + ss1;
    time2 = h2 * 3600 + mm2 * 60 + ss2;

    cout << time2 - time1;
    return 0;
}
*/

// МКАД
/*
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;

    cout << (v * t % 109 + 109) % 109 ;
    return 0;
}
*/

// Симметричное число
/*
int main() {
    int n, poz_t, poz_s, poz_d, poz_e;
    cin >> n;

    poz_t = n / 1000; //первая цифра
    poz_s = (n % 1000) / 100; //вторая цифра
    poz_d = (n % 100) / 10; //третья цифра
    poz_e = n % 10; //четвертая цифра
    cout << (poz_t + poz_s) - (poz_d + poz_e) + 1;
    return 0;
}
*/

// Улитка
/*
int main() {
    int h, a ,b;
    cin >> h >> a >> b;

    cout << (h - a + (a - b - 1)) / (a - b) + 1 ;
    return 0;
}
*/
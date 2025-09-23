#include <stdio.h>
#include <locale.h>

int main() {

    const int bazovie = 38;

    double x = 1200.0;
    int a = 45;


    setlocale(LC_CTYPE, "");

    int sverh = a - bazovie;
    double zp = bazovie * x + sverh * 1.5 * x;

    printf("РАСЧЕТ ЗАРПЛАТЫ СОТРУДНИКА\n");
    printf("================================\n");
    printf("УСЛОВИЯ:\n");
    printf("- Почасовая ставка: %.2f руб.\n", x);
    printf("- Отработано часов: %d (базовых: %d, сверхурочных: %d)\n", a, bazovie, sverh);
    printf("- Оплата за базовые часы: %.2f руб.\n", bazovie * x);
    printf("- Оплата за сверхурочные: %.2f руб.\n", sverh * 1.5 * x);
    printf("================================\n");
    printf("ИТОГОВАЯ ЗАРПЛАТА СОТРУДНИКА: %.2f руб.\n", zp);

    return 0;
}


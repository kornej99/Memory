#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    srand(time(NULL));
    int num = rand() % 100;

    char ch = ' ';
    int num2 = 0;

    do
    {
        for (int j = 0; j < 10; ++j)
        {
            cout << "Введите число: ";
            cin >> num2;

            if (num < num2)
                cout << "Слишком большое число!" << endl;
            if (num > num2)
                cout << "Слишком маленькое число!" << endl;
            if (num2 == num)
            {
                cout << endl << "Вы угадали число c " << j + 1 << " попыток!" << endl; break;
            }
        }

        cout << "Еще раз? (y/n):_\b";
        cin >> ch; cout << endl;
    } while (ch != 'n');

    system("pause");
    return 0;
}
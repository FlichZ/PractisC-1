#include <iostream> 

using namespace std;
int Fib(int i)

{
    int value = 0;
    if (i < 1) return 0;
    if (i == 1) return 1;
    return Fib(i - 1) + Fib(i - 2);
}
int main()
{
    setlocale(LC_ALL, "RUS");
    double A;
    double B;
    int operation;

    while (true) {
        cout << "Введите операцию\n";
        cout << "1 - сложение\n";
        cout << "2 - вычитание\n";
        cout << "3 - умножение\n";
        cout << "4 - деление\n";
        cout << "5 - возведение в степень\n";
        cout << "6 - Фибоначчи\n";
        cin >> operation;
        switch (operation) {
        case 1:
            cout << "Введите первое значение\n";
            cin >> A;

            cout << "Введите второе значение\n";
            cin >> B;

            system("cls");
            cout << (A + B);
            cout << "\n\n";
            break;
        case 2:
            cout << "Введите первое значение\n";
            cin >> A;

            cout << "Введите второе значение\n";
            cin >> B;

            system("cls");
            cout << (A - B);
            cout << "\n\n";
            break;
        case 3:
            cout << "Введите первое значение\n";
            cin >> A;

            cout << "Введите второе значение\n";
            cin >> B;
            system("cls");
            cout << (A * B);
            cout << "\n\n";
            break;
        case 4:
            cout << "Введите первое значение\n";
            cin >> A;

            cout << "Введите второе значение\n";
            cin >> B;
            system("cls");
            cout << (A / B);
            cout << "\n\n";
            break;
        case 5:
            cout << "Введите первое значение\n";
            cin >> A;

            cout << "Введите второе значение\n";
            cin >> B;
            system("cls");
            cout << pow(A, B);
            cout << "\n\n";
            break;
        case 6:
            cout << "Введите значение\n";
            cin >> A;
            system("cls");
            for (int i = 0; i < A; i++) {
                cout << Fib(i) << endl;
            }
            cout << "\n";
            break;
        default:
            system("cls");
            system("pause");
            break;
        }

    }
}
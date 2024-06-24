#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Максимальный элемент: " << max << "Минимальный элемент: " << min;
    system("pause");


    int arr[9]{ 11, 22, 31, 42, 52, 61, 27, 18, 19 };
    int tmp = 0, sum;
    std::cin >> tmp;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] < tmp) sum += arr[i];
    }
    int r1, r2;
    const int size = 12;
    int arr[size];
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++)
    {
        cout << "Введите доход:" ;
        cin >> arr[i];
    }
    cout << "Введите диапозон:" ;
    cin >> r1 >> r2;
    for (int j = 0; j >= r1, j < r2; j++)
    {
        if (min > arr[j])
            min = arr[j];
        if (max < arr[j])
            max = arr[j];
    }
    cout << "Минимальная прибыль: " << min ;
    cout << "Максимальная прибыль: " << max;
    system("pause");

















    return 0;
}
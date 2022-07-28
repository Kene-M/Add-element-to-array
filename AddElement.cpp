#include <iostream>
using namespace std;

int main()
{
    int size = 8;
    int numbers[size] = { 2, 3, 4, 5, 6, 7, 8};
    int index, num;

    cout << " Which index do you want to add? ";
    cin >> index;
    cout << " What number do you want to add? ";
    cin >> num;

    for(int i = size-2; i >= index; i--)
    {

        numbers[i+ 1] = numbers[i];
    }
    numbers[index] = num;
    cout << "The new array is :" << endl;
    for(int i = 0; i < 8; i++)
    {
        cout << numbers[i] << " ";
    }
}

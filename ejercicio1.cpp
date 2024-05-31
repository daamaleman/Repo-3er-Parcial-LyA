/*Tablas de multiplicar con puntero*/

#include <iostream>

using namespace std;

int main()
{
    int num, *ptr, i = 0;
    ptr = &num;
    cout << "Dime un numero"<<endl;
    scanf("%d", &num);

    while (i <= 12)
    {
        printf("%i * %i = %i \n", i , *ptr, i* *ptr);
        i++;
    }
    return 0;
}

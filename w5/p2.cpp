// pass a array to an fn and return sum

#include <iostream>

int sumof(int[], int);
void display(int[], int);

int main()
{
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    display(arr, sizeof(arr) / sizeof(arr[0]));

    std::cout << "the sum of the array is: \t" << sumof(arr, sizeof(arr) / sizeof(arr[0])) << std::endl;
}

int sumof(int arr[], int n)
{

    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void display(int arr[], int n)
{
    std::cout << "the array elements are: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
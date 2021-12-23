#include <iostream>
using namespace std;

class Swapping
{
public:
 
    void swap(int *x, int *y)
    {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;

    }

};


class Bubble_sort : public Swapping
{
    public:
    void Bubble(int arr[], int n)
    {
        int i, j;
        for (i = 0; i < n - 1; i++)
        {
            for (j = n; j >i; j--)
            {
                if (arr[j] < arr[j - 1])
                {
                    swap(&arr[j], &arr[j - 1]);
                }
            }
        }
    }

    print_sort(int arr[], int n)
    {

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << "\t";
        }
    }
};


int main()
{
    int arr[5];
    int n = sizeof(arr);
    cout << "Enter The Elements In the array " << endl;
    for (int i = 0; i <n ; i++)
    {
        cin >> arr[i];
    }

    Bubble_sort bs;
    bs.Bubble(arr, n);
    bs.print_sort(arr, n);

    return 0;
}


#include <iostream>

using namespace std;

template <class T>
void arrange(T arr[], int n)
{
    T temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "enter the no of element" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the integer element" << endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "sorted array" << endl;
    arrange(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "enter the no of element" << endl;
    cin >> n;
    float arr2[n];
    cout<<"enter the floating no"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    cout << "sorted array" << endl;
    arrange(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    
    return 0;
}
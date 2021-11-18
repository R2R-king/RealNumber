#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    const int N =19;
    int arr[N];
    cout << "input marks:" << endl;
    for (int q = 0; q < N; q++)
    {
        cout << "Ученик " << q + 1 << " и его оценка по предмету: " << endl;
        
        cin >> arr[q];
        if (arr[q] < 0 || arr[q]>5) {
            cout << "введите оуенку правильно"<<endl;
            q--;
        }  
    }
    double kol = 0;
    for (int i = 0; i < N; i++) 
        kol += arr[i];

    cout << "успеваемость группы = " << ((kol) / (N*5))*100<<"%"<< endl;

    
       
    
    return 0;
}
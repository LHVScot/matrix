#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    const int size1 = 4,size2=4;
    int array[size1][size2];
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            array[i][j] = rand() %100;
            cout << array[i][j]<<" ";
        }
        cout << "\n\n";
    }
    for (int i = 0; i < size1; i++) {
        int max = array[i][0]; 
        for (int j = 1; j < size2; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
        cout << "Максимальный элемент в строке " << i + 1 << ": " << max << endl;
    }
    int zero_count = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
          if(array[i][j]==0)
          {
              zero_count += 1;
          }
        }
    }
    cout << "колличество нулей в массиве - " << zero_count;

    int max_ellement = array[0][0];
   
    if (max_ellement < array[0][1])
    {
        max_ellement = array[0][1];
        if (max_ellement < array[0][2])
        {
            max_ellement = array[0][2];

            if (max_ellement < array[0][3])
            {
                max_ellement = array[0][3];

                if (max_ellement < array[1][2])
                {
                    max_ellement = array[1][2];
                    
                    if (max_ellement < array[1][3])
                    {
                        max_ellement = array[1][3];
                    }
                }
            }
        }
    }

    cout << "\nМаксимальный эллемент в заданом сегменте: " << max_ellement;

   
    return 0;
}
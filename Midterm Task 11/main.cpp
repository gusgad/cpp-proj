#include <iostream>

using namespace std;

int main()
{
    int i;
    int maxA;
    int maxB;
    int posA = 0;
    int posB = 0;
    int m = 6;

    int A[m] = {6, 7, 1, 9, 24, 12};
    int B[m] = {34, 78, 3, 6, 5, 17};

    maxA = A[0];
    for (i = 0; i < m; i++) {
        if (A[i] > maxA) {
            maxA = A[i];
            posA = i;
        }
    }


    maxB = B[0];
    for (i = 0; i < m; i++) {
        if (B[i] > maxB) {
            maxB = B[i];
            posB = i;
        }
    }


    A[posA] = maxB;
    B[posB] = maxA;

    for (i = 0; i < m; i++) {
        cout << A[i] << " ";
    }

    cout << " " << endl;

    for (i = 0; i < m; i++) {
        cout << B[i] << " ";
    }



    return 0;
}

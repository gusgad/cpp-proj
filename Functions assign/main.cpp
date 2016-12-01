#include <iostream>

using namespace std;


void createArray(int arr[], int len) {
    int val;
    for (int i = 0; i < len; i++) {
        cin >> val;
        arr[i] = val;
    }
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}


int sum(int arr[], int len) {
    int sum = 0;

    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }

    return sum;
}



void changeArrays(int sumX, int sumY, int arrA[], int lengthA, int arrB[], int lengthB) {
    cout << "Array A after changing: " << endl;
    for (int i = 0; i < lengthA; i++) {
        if (arrA[i] < 0) {
            arrA[i] = sumX;
        }
        cout << arrA[i] << ", ";
    }

    cout << endl;

    cout << "Array B after changing: " << endl;
    for (int i = 0; i < lengthB; i++) {
        if (arrB[i] >= 10) {
            arrB[i] = sumY;
        }
        cout << arrB[i] << ", ";
    }
}





int main()
{
    /* Variables */
    int n;
    int m;
    int sumResultA;
    int sumResultB;

    cout << "Enter n:" << endl;
    cin >> n;

    cout << "Enter m:" << endl;
    cin >> m;

    int A[n];
    int B[m];

    cout << "Enter 5 values for array A:" << endl;
    createArray(A, n);

    cout << "Enter 6 values for array B:" << endl;
    createArray(B, m);


    /* Printing out arrays */
    cout << "Array A:" << endl;
    printArray(A, n);
    cout << "Array B:" << endl;
    printArray(B, m);
    cout << endl;

    /* Printing the sum of arrays */
    sumResultA = sum(A, n);
    sumResultB = sum(B, m);
    cout << "Sum of array A is " << sumResultA << " and array B is " << sumResultB << endl;

    cout << "Sum of the element of the array A is " << sumResultA << ", B is " << sumResultB << endl;
    if (sumResultA > sumResultB) {
        cout << "Sum of the elements of the array A is greater than B.";
    } else {
        cout << "Sum of the elements of the array B is greater than A.";
    }

    cout << endl;
    changeArrays(sumResultA, sumResultB, A, n, B, m);

    return 0;
}

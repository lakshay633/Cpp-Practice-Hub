// Find common elements in three sorted arrays
// Solve in Linear time and Auxiliary Space:  O(1)
// Examples: 
// Input: 
// ar1[] = {1, 5, 10, 20, 40, 80} 
// ar2[] = {6, 7, 20, 80, 100} 
// ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} 
// Output: 20, 80
// Input: 
// ar1[] = {1, 5, 5} 
// ar2[] = {3, 4, 5, 5, 10} 
// ar3[] = {5, 5, 10, 20} 
// Output: 5, 5
#include <iostream>
using namespace std;

void commonElements(int a1[], int a2[], int a3[], int n1, int n2, int n3) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (a1[i] == a2[j] && a2[j] == a3[k]) {
            cout << a1[i] << " ";
            i++;
            j++;
            k++;
        } else if (a1[i] < a2[j]) {
            i++;
        } else if (a2[j] < a3[k]) {
            j++;
        } else {
            k++;
        }
    }
}

int main() {
    int a1[] = {1, 5, 10, 20, 40, 80};
    int a2[] = {6, 7, 20, 80, 100};
    int a3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);
    int n3 = sizeof(a3) / sizeof(a3[0]);

    commonElements(a1, a2, a3, n1, n2, n3); 

    return 0;
}
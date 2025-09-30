#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[1000];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int min_element = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min_element) {
            min_element = A[i];
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == min_element) {
            count++;
        }
    }
    if (count % 2 == 1) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }

    return 0;
}

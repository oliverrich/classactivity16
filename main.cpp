#include <iostream>

using namespace std;




int main() {
    cout << "how many students do you have"<< endl;
    int studentNumber;
    cin >> studentNumber;
    int grades[studentNumber];
    for (int i = 0; i < studentNumber; i++) {
        cin >> grades[i];
    }
    return 0;
}
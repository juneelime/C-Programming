#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list = {1, 2, 3, 4};

    for(int& i: list) {
    i*=2;
    cout << i;
    }   

    cout << "\n";

    for(int i: list) {
    cout << i;
    }
}

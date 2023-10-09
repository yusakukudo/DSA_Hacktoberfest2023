#include <iostream>
#include <vector>

using namespace std;

vector<int> deci_to_bi(int n) {
    vector<int> bi;
    while (n > 0) {
        bi.push_back(n & 1);
        n >>= 1;
    }
    return bi;
}

int cons_ones(int n) {
    int max_count = 0;
    int current_count = 0;
    while (n > 0) {
        if (n & 1) {
            current_count++;
        } 
        else {
            max_count = max(max_count, current_count);
            current_count = 0;
        }
        n >>= 1;
        }
    max_count = max(max_count, current_count);
    return max_count;
}

int main() {
    int number;
    cin >> number;
    cout<<"Max number of ones in binary format: " << cons_ones(number);
    return 0;
}

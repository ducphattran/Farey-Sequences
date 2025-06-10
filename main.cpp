#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector<pair<int, int>> generateFarey(int N) {

    vector<pair<int, int>> current = { {0, 1}, {1, 1} };

    for (int n = 2; n <= N; ++n) {
        vector<pair<int, int>> next;
        next.push_back(current[0]); 

        for (size_t i = 0; i < current.size() - 1; ++i) {
            int a = current[i].first;
            int b = current[i].second;
            int c = current[i + 1].first;
            int d = current[i + 1].second;

            // Insert new fraction if b + d == n
            if (b + d == n) {
                next.push_back(make_pair(a + c, b + d));
            }

            // Always add the right-hand fraction
            next.push_back(current[i + 1]);
        }

        current = next;
    }

    return current;
}

// Function to print the Farey sequence
void printFarey(const vector<pair<int, int>>& seq) {
    for (size_t i = 0; i < seq.size(); ++i) {
        int num = seq[i].first;
        int den = seq[i].second;
        cout << num << "/" << den << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter Farey sequence order N: ";
    cin >> N;

    vector<pair<int, int>> fareySeq = generateFarey(N);
    printFarey(fareySeq);

    return 0;
}

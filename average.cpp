#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

double calculateAverage(const vector<double>& numbers) {
    double sum = 0;
    for (double num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please input numbers to find average.\n";
        return 0;
    }

    vector<double> numbers;
    for (int i = 1; i < argc; ++i) {
        istringstream iss(argv[i]);
        double num;
        if (iss >> num) {
            numbers.push_back(num);
        }
    }

    int average = calculateAverage(numbers);

    cout << "---------------------------------" << endl;
    cout << "Average of " << numbers.size() << " numbers = " << fixed << setprecision(3) << average << endl;
    cout << "---------------------------------" << endl;

    return 0;
}



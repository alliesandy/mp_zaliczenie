#include "../src/kwadrat.hpp"
#include <vector>
#include <iomanip>
#include <iostream>
#include <utility>
using namespace std;
int main() {
vector<pair<float, float>> tests = {
    make_pair(0.0, 0.0),
    make_pair(-1.0, 1.0),
    make_pair(1.2, 1.44),
};

for (auto test : tests) {
if (kwadrat(test.first) != test.second) {
cerr << "FAIL: kwadrat(" << test.first << ") is not " << test.second << endl;
return 1;
}
}
cout << "OK" << endl;
return 0;
}
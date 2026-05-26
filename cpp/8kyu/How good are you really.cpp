#include <vector>
#include <numeric> // for accumulate
using namespace std;

bool betterThanAverage(vector<int> classPoints, int yourPoints) {
    classPoints.push_back(yourPoints);

    double average = static_cast<double>(
        accumulate(classPoints.begin(), classPoints.end(), 0)
    ) / classPoints.size();

    return (yourPoints > average) ? true : false;
}
#include <vector>

int save(const std::vector<int>& sizes, int capacity) {
    int used = 0;
    int count = 0;

    for (int s : sizes) {
        if (s == 0) {
           
            count++;
        } else if (used + s <= capacity) {
            used += s;
            count++;
        } else {
            break; 
        }
    }

    return count;
}
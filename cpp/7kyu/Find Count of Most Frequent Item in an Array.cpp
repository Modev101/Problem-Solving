#include <vector>
#include <algorithm>  

unsigned int most_frequent_item_count(const std::vector<int>& collection) {
    if (collection.empty()) return 0;

    unsigned int result = 0;

    for (int num : collection) {
        unsigned int freq = std::count(collection.begin(), collection.end(), num);
        if (freq > result) {
            result = freq;
        }
    }

    return result;
}
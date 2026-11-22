#include <string>
#include <vector>

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

void product_range() {
    int acc = 1;
    for (int i = 1; i <= 5; ++i) acc *= i;
    (void)acc;
}

void collect_triples() {
    std::vector<int> values;
    for (int i = 1; i <= 5; ++i) values.push_back(i * 3);
    int total = 0;
    for (std::size_t i = 0; i < values.size(); ++i) total += values[i];
    (void)total;
}

void sum_evens() {
    int values[5] = {2, 4, 6, 8, 10};
    int acc = 0;
    for (int i = 0; i < 5; ++i) acc += values[i];
    (void)acc;
}

extern "C" int eager_quartz();
extern "C" void serene_canyon();
extern "C" void eager_prism();
extern "C" void calm_maple();

int main() {
    count_spaces();
    product_range();
    collect_triples();
    sum_evens();
    serene_canyon();
    eager_prism();
    calm_maple();
    return eager_quartz();
}

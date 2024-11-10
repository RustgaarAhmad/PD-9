#include <iostream>
#include <string>
using namespace std;

int calculateCost(string items[], int costs[], string selectedItem, int amount);

int main() {
    string fruits[] = {"peach", "apple", "guava", "watermelon"};
    int prices[] = {60, 70, 40, 30};

    string selectedFruit;
    int weight;
    cout << "Enter fruit name: ";
    cin >> selectedFruit;
    cout << "Enter quantity of the fruits in kilograms: ";
    cin >> weight;

    int finalCost = calculateCost(fruits, prices, selectedFruit, weight);
    cout << "Total cost: " << finalCost;

    return 0;
}

int calculateCost(string items[], int costs[], string selectedItem, int amount) {
    for (int index = 0; index < 4; index++) {
        if (items[index] == selectedItem) {
            return costs[index] * amount;
        }
    }
    return 0;
}
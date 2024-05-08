class Solution {
    public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int current = capacity;
        int index = 0;
        int size = plants.size();
        int step = 0;
        while (index < size) {
            if (current >= plants[index]) {
                current -= plants[index];
                step++;
            } else {
                step += index * 2 + 1;
                current = capacity - plants[index];
            }
            cout << step << endl;
            index++;
        }
        return step;
    }
};

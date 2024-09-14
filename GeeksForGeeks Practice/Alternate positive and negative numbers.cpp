
//Alternate positive and negative numbers



class Solution {
public:
    void rearrange(vector<int> &arr) {
        int n = arr.size();
        vector<int> positive;
        vector<int> negative;

        // Separate positive and negative numbers
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                positive.push_back(arr[i]);
            } else {
                negative.push_back(arr[i]);
            }
        }

        // Clear the original array to fill with rearranged values
        arr.clear();
        int i = 0, j = 0, k = 0;

        // Start alternating between positive and negative
        while (j < positive.size() && k < negative.size()) {
            if (i % 2 == 0) {
                arr.push_back(positive[j++]);  // Insert positive element
            } else {
                arr.push_back(negative[k++]);  // Insert negative element
            }
            i++;
        }

        // If there are remaining positive elements
        while (j < positive.size()) {
            arr.push_back(positive[j++]);
        }

        // If there are remaining negative elements
        while (k < negative.size()) {
            arr.push_back(negative[k++]);
        }
    }
};

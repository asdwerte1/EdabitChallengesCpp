#include <iostream>
#include <vector>
using namespace std;

vector<int> evenOddTransform(vector<int> arr, int n) {
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] -= 2 * n;
        } else {
            arr[i] += 2 * n;
        }
        
    }
    return arr;
}

int main() {
    vector<int> array = {1, 2, 3};
    int repeats = 1;
    vector<int> result = evenOddTransform(array, repeats);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
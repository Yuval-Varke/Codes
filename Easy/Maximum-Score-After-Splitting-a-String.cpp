#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s = "011101";
    int n = s.size();
    vector<int> ps(n);
    ps[0] = s[0] - '0'; // Convert character to integer
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + (s[i] - '0'); // Convert character to integer
    }

    int maxsum = 0;
    for (int i = 0; i < n - 1; i++) // Split at index i
    {
        int leftZeros = i + 1 - ps[i]; // Number of 0's in the left part
        int rightOnes = ps[n - 1] - ps[i]; // Number of 1's in the right part
        maxsum = max(maxsum, leftZeros + rightOnes);
    }
    cout << maxsum;
}
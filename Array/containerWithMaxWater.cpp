#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int MaxWater = 0;
    int Area = 0;
    int n = sizeof(height) / 4;
    int left = 0;
    int right = n - 1;
    int w, h;

    while (left < right)
    {
        w = right - left;
        h = min(height[left], height[right]);
        Area = h * w;
        MaxWater = max(Area, MaxWater);

        if (height[right] > height[left])
            left++;
        else
            right--;
    }
    cout<<"Container With Most Water: ";
    cout << MaxWater;
}
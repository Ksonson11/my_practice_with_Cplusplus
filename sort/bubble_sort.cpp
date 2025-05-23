#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    int n,temp;
    cout << "Enter the size of vector: ";
    cin >> n;
    // create a vector
    vector<int> nums(n);
    // 給vector值
    for(int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    // Bubble sort
    for(int j = 0; j < n-1; ++j) // 巡整個只需要做 n-1 次
    {
        for(int k = 0; k < n-1-j; k++) // 每做完一輪 最右邊就已經確定 下一輪可以不用檢查(-j)
        {
            if (nums[k] > nums[k+1]) // 因為這裡會用到 k+1 所以 k 最多取 n-1 就好
            {
                temp = nums[k];
                nums[k] = nums[k+1];
                nums[k+1] = temp;
            }
            
        }
    }
    // print the vector
    for(int elements : nums)
    {
        cout << elements << " ";
    }

    return 0;
}
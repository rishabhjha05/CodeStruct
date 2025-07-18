/*given a vector and value of k and a target value make a
function which returns a vector of k closest element */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int find_lb(vector<int> vec, int target)
{
    int low = 0, high = vec.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (vec[mid] == target)
            return mid - 1;
        else if (vec[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return high;
}
vector<int> find_kclosest(vector<int> vec, int k, int target)
{
    vector<int> sol;
    int lb = find_lb(vec, target), ub;
    if (lb <= vec.size() - 2 && vec[lb + 1] == target)
    {
        sol.push_back(target);
        ub = lb + 2;
    }
    else
        ub = lb + 1;
    while (sol.size() < k && lb >= 0 && ub < vec.size())
    {
        int LB = target - vec[lb], UB = vec[ub] - target;
        if (LB <= UB)
            sol.push_back(vec[lb--]);
        else
            sol.push_back(vec[ub++]);
    }
    if (lb < 0)
        while (sol.size() < k)
            sol.push_back(vec[ub++]);
    else
        while (sol.size() < k)
            sol.push_back(vec[lb--]);
    return sol;
}
int main()
{

    int k, target, n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector<int> closest_k, vec(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> vec[i];
    }
    cout << "Enter the target value : ";
    cin >> target;
    cout << "Enter the value of k : ";
    cin >> k;
    closest_k = find_kclosest(vec, k, target);
    sort(closest_k.begin(), closest_k.end());
    for (int j = 0; j < k; j++)
        cout << closest_k[j] << ",";
    return 0;
}
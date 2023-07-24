#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50], num, key, i, k;
    cout << "Enter number of elements ";
    cin >> num;
    for (i = 1; i <= num; i++)
        cin >> arr[i];
    cin >> key;
    k = 1;
    while (key != arr[k] && k < num)
        k++;
    if (key == arr[k])
        cout << "Successful Searching\n";
    else
    {
        arr[num + 1] = key;
        num++;
        for (i = 1; i <= num; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
      //  return 0;
    //aabbgggg
 jkgmjhmn
}

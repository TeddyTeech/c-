#include <iostream>
using namespace std;

int main()
{
    int n ; cin >> n;
    int arr[n];
    string answer;
    for (int i=0;i<n;++i)
    {
        cin >> arr[i];
        if (i >= 1 && arr[i] >= arr[i - 1])
        {
            answer = "Yes";
            continue;
        }
        else if(i >=1){
            answer = "No";
            break;
        }
    }
    cout << answer << endl;
}

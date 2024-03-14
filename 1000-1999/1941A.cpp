#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        int leftPocket, rightPocket, maxSum;
        cin >> leftPocket >> rightPocket >> maxSum;
        int nPossibilities = 0;

        int leftPockerVal[leftPocket];
        for (int i = 0; i < leftPocket; i++)
            cin >> leftPockerVal[i];

        int rightPockerVal[rightPocket];
        for (int i = 0; i < rightPocket; i++)
            cin >> rightPockerVal[i];

        for (int i = 0; i < leftPocket; i++)
        {
            for (int j = 0; j < rightPocket; j++)
                if (leftPockerVal[i] + rightPockerVal[j] <= maxSum) nPossibilities++;
        }

        cout << nPossibilities << endl;
    }
}

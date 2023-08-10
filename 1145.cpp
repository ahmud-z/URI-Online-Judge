#include<iostream>
using namespace std;

int main()
{
    int colCount, range;

    cin>>colCount>>range;

    int i = 1;

    while(i < range) {
        for(int j = 1; (j <= colCount && i <= range); j++) {
            cout << i++;
            if(j != colCount && i <= range) {
                cout << " ";
            }
        }
        cout << endl;
    }


    return 0;
}

#include <iostream>
using namespace std;

int main(){

    int i, maxResult, minResult, n = 5, a[] = {5, 7, 1, 9, 3};
    maxResult = minResult = a[0];
        for(i = 1 ; i < n ; i++){
            if(a[i] > maxResult){
            maxResult = a[i];
            }
            if(a[i] < minResult){
            minResult = a[i];
            }
        }
        cout << "The Maximum value is " << maxResult << endl;
        cout << "The Minimum value is " << minResult << endl;
    return 0;
}

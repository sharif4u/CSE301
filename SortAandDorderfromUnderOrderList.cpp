#include <iostream>
using namespace std;

int main() {
    int i, j, k, a[5]={4,5,1,10,7}, n=5, temp;
        for(i = 0; i < n; i++){
            j = i;
            for(k = i+1; k < n; k++){
                if(a[k] < a[j]){
                    temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }
        cout << "After asending sorting is: ";
        for(i = 0; i < n; i++){
            cout << a[i] << " ";
        }

        cout << "\nAfter dsending sorting is: ";
        for(i = n-1; i >= 0; i--){
            cout << a[i] << " ";
        }

    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int k= arr[0];
    for(int i = 0; i<n;i++){
        

        if(k < arr[i]) {k = arr[i];}

    }

    cout<<k<<endl;

    return 0;
}
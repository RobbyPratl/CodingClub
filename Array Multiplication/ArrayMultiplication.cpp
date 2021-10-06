#include <iostream>

int main() {
    int arr[] = { 2,3,4,5,7 };
    int foo[] = { 3,2,4,5,8 };
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        std::cout << foo[i] * arr[i] << std::endl;
    }
}

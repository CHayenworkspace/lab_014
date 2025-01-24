#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){for(int i = 0;i<N-1;i++){    
    for(int e = i;e>=0;e--){
        T x = d[e+1];
        if(d[e]<x){
        d[e+1]=d[e];
        d[e]=x;
        }
    }
    cout << "pass "<<i+1<<":";
    for(int j = 0; j < 10; j++) cout << d[j] << " ";
    cout << "\n";
    
    }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

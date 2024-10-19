#include<bits/stdc++.h>
using namespace std;


int part(int a[], int lo, int high){
    int pivot =a[high];
    int i = lo;

    for(int j= lo ; j<=high-1; j++){
        if(a[j]<pivot){
            swap(a[i], a[j]);
            i++;
        }
    }
    // to send pivot to its original index
    swap(a[i], a[high]);
    return i; 
    

}

void QuickSort(int a[], int lo, int high){
    if(lo<high){
        int pidx = part(a, lo, high);
        QuickSort(a, lo, pidx-1);
        QuickSort(a, pidx+1, high);

    }
}
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    QuickSort(a, 0, n-1);

    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }

    cout<< endl;
    return 0;

}

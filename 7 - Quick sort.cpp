
#include <iostream>
using namespace std;
int partition(int a[],int si,int ei){
    int pivotindex = si;
    for(int i = si;i<=ei;i++){
        if (a[i] < a[si]){
            pivotindex++;
        }
    }
    //positioning element to it's right position
    int temp = a[si];
    a[si]  = a[pivotindex];
    a[pivotindex] = temp;
    int m = si, n = ei;
    while(m<pivotindex){
        if(a[m] < a[pivotindex]){
            m++;
        }else if(a[n] > a[pivotindex]){
            n--;
        }else{
            int temp = a[m];
            a[m] = a[n];
            a[n] = temp;
            m++;
            n--;
        }
    }
    return pivotindex;

}


void quicksort(int a[],int si,int ei){
    //base case
     if(si >= ei){
        return;
    }
    int c = partition(a,si,ei);
    quicksort(a,si,c-1);
    quicksort(a,c+1,ei);
}


int main(){
    int a[5] = {3,2,4,1,5};
    quicksort(a,0,4);
    int i =0;
    while(i<5){
        cout << a[i] << " ";
        i++;
    }
}
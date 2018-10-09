#include <iostream>
using namespace std;
#define op_io ios_base::sync_with_stdio(0);cin.tie(0);
void mezclar(long long int A[],int l,int m,int r){
    int n1 = m - l + 1;
    int n2 = r-m;
    long long int L[n1];
    long long int R[n1];
    for(int i=0;i<n1;i++){
        L[i] = A[l+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = A[m+1+i];
    }
    int a = 0;
    int b = n2-1;
    int k = l;

    while(a <n1 && b>=0){
        if(L[a] <= R[b]){
            A[k] = L[a];
            a++;
        }
        else{
            A[k] = R[b];
            b--;
        }
        k++;
    }
    while(a<n1){
        A[k] = L[a];
        a++;
        k++;
    }
    while(b>=0){
        A[k] = R[b];
        b--;
        k++;
    }
}
void ordenar(long long int A[],int lo,int hi){
    if(lo<hi){
        int m = lo + (hi-lo)/2;
        ordenar(A,lo,m);
        ordenar(A,m+1,hi);
        mezclar(A,lo,m,hi);
    }
}
int main(){
    op_io
    long int n;
    cin>>n;
    long long int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    ordenar(A,0,n-1);

    for(int i=0;i<n;i++)cout << A[i] << " ";
    return 0;
}
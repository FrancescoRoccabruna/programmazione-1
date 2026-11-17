#include<iostream>
using namespace std;


int max(int vet[],int n);


int main(){
    const int MAX = 10;
    int vet[MAX],n,i;
    do{
       cout<< "inserire il numero di elementi da inserire : ";
       cin >> n;
    } while(n<1||n>MAX);

    for(i=0;i<n;i++){
       cout << "inserire l'elemento numero " << i+1 << ":";
       cin >> vet[i];
    }
    cout << max(vet,n);
}
 
int max(int vet[],int n){
    int max_c;
    n--;
    if(n==0)
        return vet[0];
    max_c = max(vet,n);
    if(max_c>vet[n])
         return max_c;
    return vet[n];
}
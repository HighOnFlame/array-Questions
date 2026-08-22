#include <bits/stdc++.h>
using namespace std;

void rotatearraybyd(int arr[], int n, int d){
    d = d % n; 
    // storing temp
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    // shifting
    for(int i = d;i<n;i++){
        arr[i-d]=arr[i];
    }

    // putbacktemp
    for(int i = n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
    
}

void rotatearraybyD2(int arr[], int n, int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int d;
    cout<<"Enter by how many places to rotate : "<< endl;
    cin>>d;
    

    rotatearraybyD2(arr, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    
    }
    return 0;
}
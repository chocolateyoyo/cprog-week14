#include <iostream>
#include <iomanip>

using namespace std;

// 參考 main() 函數補上所需的程式

void dump(int dat[], int len) {
    for(int i=0; i<len; i++) {
        cout<<setw(5)<<dat[i];
    }
    cout<<endl;
}

void bbsort(int dat[], int len) {
    for(int i=0; i<len-1; i++) {
        for(int j=i+1; j<len; j++) {
            if (dat[i]>dat[j])
                swap(dat[i],dat[j]);
        }
    }
}

// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================


int main()
{
    int arr[100];
    int i = 0;
    while(cin>>arr[i++]);
    i--;
    bbsort(arr,i);
    dump(arr,i);

    return 0;
}
#include <iostream>
#include<algorithm>
#include<stack>
#include<vector>
#include<map>
#include<set>

using namespace std;

int main(){
   
   system("pause");
   return 0;
}

void QuickSort(int a[],int low,int high){
    if(low>=high)
      return;
    int first=low;
    int last=high;
    int key=a[first];
    while(first<last){
         while(first<last&&a[last]>=key){
             last--;
         }
         a[first]=a[last];
         while(first<last&&a[first]<key){
             first++;
         }
         a[last]=a[first];
    }
    a[first]=key;
    QuickSort(a,low,first-1);
    QuickSort(a,first+1,high);
}
void BubbleSort(int a[],int length){   
    bool flag=false;
    for(int i=0;i<length;i++){
        flag=false;
        for(int j=i+1;j<length-1;j++){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
                flag=true;
            }              
        }
        if(flag==false)
           break;
    }
}
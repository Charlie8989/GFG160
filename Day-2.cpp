class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int index=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
        if(arr[i]!=0)
        arr[index++]=arr[i];
        }
        while(index<n){
            arr[index++]=0;
        }
    }
};

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int l1=arr1.size();
        int l2=arr2.size();
        int a,b=0;
        for(int i=0;i<l1;i++){
            a=0;
            for(int j=0;j<l2;j++){
                if(abs(arr1[i]-arr2[j])>d){
                    a=a+1;
                }
                else{
                    break;
                }
            }
            if(a==l2){
                b=b+1;
            }
        }
        return b;
        
    }
};
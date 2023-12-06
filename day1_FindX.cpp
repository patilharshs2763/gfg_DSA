
//Solution:
class Solution {
  public:
    int countX(int L, int R, int X) {
        int c=0;
        for(int i=L+1;i<R;i++){
            int t=i,rem;
            while(t>0){
                int rem=t%10;
                if(rem==X){
                    c++;
                }
                t=t/10;
            }
        }
        return c;
    }
};

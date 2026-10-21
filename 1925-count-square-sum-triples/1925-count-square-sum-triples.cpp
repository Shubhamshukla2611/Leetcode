class Solution {
public:
    int countTriples(int n) {

        int count=0;
        for(int a=1;a<=n-2;a++){
            for(int b=a+1;b<=n-1;b++){
                for(int c=b+1;c<=n;c++){
                    if((a*a + b*b)==c*c){
                        count++;
                    }
                }
            }
        }
        return 2*count;
        
    }
};
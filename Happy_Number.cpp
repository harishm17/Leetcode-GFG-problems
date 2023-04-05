class Solution {
public:
    bool isHappy(int n) {
        int temp=n;
        set<int> s;
        while(temp>1)
        {   
            s.insert(temp);
            int sum=0;
            int temp1=temp;
            while(temp1!=0){
                sum=sum+(temp1%10)*(temp1%10);
                temp1=temp1/10;
            }
            temp=sum;
            if(s.find(temp)!=s.end()){
                return false;
            }
        }
        return true;
    }
};

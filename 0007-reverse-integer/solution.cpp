class Solution {
public:
    int reverse(int x) {
        int rev=0;
        int max=(pow(2,31)-1);
        int min=pow(-2,31);
        if(x>0)
        {
            while(x>0)
            {
            int r=x%10;
            if(rev>max/10 || rev<min/10)
            return 0;
            else if(rev==max/10 || rev==min/10)
            if(r>=max%10 || r<=min%10)
            return 0;
            rev=(rev*10)+r;
            x=x/10;
            }
        return rev;
        }
        else
        {
            while(x<0)
            {
            int r=x%10;
            if(rev>max/10 || rev<min/10)
            return 0;
            else if(rev==max/10 || rev==min/10)
            if(r>=max%10 || r<=min%10)
            return 0;
            rev=(rev*10)+r;
            x=x/10;
            }
        return rev;
        }
    }
};

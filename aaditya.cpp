class Solution {
public:
    int maxArea(vector<int>& height) {
      int   maximum=0;
      int i=0;
      int j=height.size()-1;
     while(i<j)
       {       
        
               int b=min(height[i],height[j])*(j-i);
                maximum=max(b,maximum);
                if(height[i]<height[j])
                i++;
                else
                j--;
            
       }
       return maximum;
    }
};
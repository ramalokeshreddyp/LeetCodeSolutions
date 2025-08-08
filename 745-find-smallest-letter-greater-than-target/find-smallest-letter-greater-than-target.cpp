class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int n = letters.size();
    int i = 0, j = n - 1;
      while(i<=j)  {
        int mid=i+(j-i)/2;
        if(letters[mid]<=target){
          
i=mid+1;
        }
        else{
            j=mid-1;
        }
      }
      return letters[i%n];
    }
};
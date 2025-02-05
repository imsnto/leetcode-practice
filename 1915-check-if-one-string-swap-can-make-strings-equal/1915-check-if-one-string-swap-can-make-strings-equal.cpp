class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
      vector<int>id;
       for(int i=0; i<s1.size(); i++){
        if(s1[i] != s2[i]) id.push_back(i);
       }
       
       if(id.size() == 0) return true;
       if(id.size() == 1) return false;

       swap(s1[id[0]], s1[id[1]]);
       return s1==s2;

       
    }
};
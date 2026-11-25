class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
         unordered_set<char>st ;
          for(auto it :brokenLetters ){
            st.insert(it);
        }
        stringstream ss(text);
        string str;
        vector<string>arr;
         int cnt =0 ;
        while (ss >> str){
           arr.push_back(str);
        }

        for (auto it : arr)
        {
            for (auto  c :it )
            {
                if (st.find(c) != st.end())
                {
                    cnt++;
                    break;
                }
            }
        }

        return arr.size() - cnt;
    }
};
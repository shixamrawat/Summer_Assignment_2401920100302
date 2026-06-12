class Solution {
public:
    string getkey(string word){
        int arr[26]={0};
        for(char &ch:word){
            arr[ch-'a']++;
        }
        string key="";
        for(int i=0;i<26;i++){
            int freq=arr[i];
            if(freq>0){
                key+=string(freq,i+'a');
            }
        }
        return key;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string ,vector<string>>mp;
        vector<vector<string>>result;
        
        for(int i=0;i<n;i++){
            string word=strs[i];
            //rather than sorting which take nlogn we use array to do the same task using key fncn
            string key =getkey(word);
            mp[key].push_back(word);
        }
        for(auto &it:mp){
            result.push_back(it.second);
        }
        return result;
    }
};
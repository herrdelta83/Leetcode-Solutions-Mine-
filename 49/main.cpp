#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map> //sort in ascending order
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //initialized hash map where the key is a char, and the value is a list of strings
        unordered_map<char, vector<string>> anag;
        //Anagrams list of list
        vector<vector<string>> Angr;
        //character list
        vector<char> ch;
        //Anagram map with its length
        map<int, string> angr;

        //local vars
        string s_st;
        string s;

        //iterate through the string array
        for(int i = 0; i < strs.size(); i++){
            //standard size for string
            s_st = strs[0]; //string
            int AnagSize = s_st.size();
            //check if it is a valid anagram list
            if (AnagSize < strs[i].size()){
                return vector<vector<string>>();
            }
            //example 2 and 3
            if (strs.size() == 0 || strs.size() == 1){
                return vector<vector<string>>{strs};
            }
            //char list
            s = strs[i];
            for(int j = 0; j < s.size(); j++){
                //check if s[j] is NOT found in our unique character list 'ch'
                if(find(ch.begin(), ch.end(), s[j]) == ch.end()){
                    ch.push_back(s[j]); //add a char
                }
            }
        }

        //insert into hash map using char key
        for(int i = 0; i < ch.size(); i++){
            //search through the strings in list
            for(int j = 0; j < strs.size(); j++){
                //search for the char
                size_t pos = strs[j].find(ch[i]);
                //if not in string returns string::npos
                if(pos != string::npos){
                    anag[ch[i]].push_back(strs[j]);
                }
            }
        }

        //search for the strings lists that doesn't have "all strings", meaning they are common characters
        for(const auto& [c, string_list] : anag){
            for(const auto& St : string_list) {
                //check that doesn't have same size as original strs list
                if (St.size() != strs.size()){
                    //insert into an unordered anagram (vector of pair) list
                    angr[St.size()] = St; 
                }
            }
        }

        //insert into ascending order the anagram list of lists
        for (const auto& A : angr){
            //insert with second as it is for the value rather than the key
            Angr.push_back({A.second});
        }


        return Angr;
    }
};

int main(){
    Solution sol;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    sol.groupAnagrams(strs);
    return 0;
}

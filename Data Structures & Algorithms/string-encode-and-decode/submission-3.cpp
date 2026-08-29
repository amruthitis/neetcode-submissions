class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for (const string& str : strs){
            encoded.append(to_string(str.size()));
            encoded.push_back('#');
            encoded.append(str);
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        
        while (i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            string word = s.substr(i, length);
            decoded.push_back(word);
            i += length;
        }

        return decoded;
    }
};
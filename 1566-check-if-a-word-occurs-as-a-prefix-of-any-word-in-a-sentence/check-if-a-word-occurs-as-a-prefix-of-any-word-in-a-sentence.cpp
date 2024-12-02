class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words;
        string nw = "";
        for (int i = 0; i < sentence.length(); i++) {
            if (sentence[i] != ' ') {
                nw += sentence[i];
            } else {
                words.push_back(nw);
                nw = "";
            }
        }
        if (!nw.empty()) {
            words.push_back(nw);
        }
        for (int i = 0; i < words.size(); i++) {
            int j;
            if (searchWord.length() <= words[i].length()) {
                for (j = 0; j < searchWord.length(); j++) {
                    if (words[i][j] != searchWord[j])
                        break;
                }
                if (j == searchWord.length()) {
                    return i + 1;
                }
            }
        }
        return -1;
    }
};
class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char, int> freq;

        for (char ch : s) {
            freq[ch]++;
        }
        priority_queue<pair<int, char>> pq;
        for (auto& entry : freq) {
            pq.push({entry.second, entry.first});
        }
        string k = "";
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
             for (int i = 0; i < top.first; ++i) {
                k += top.second; 
            }
        }
        return k;
    }
};
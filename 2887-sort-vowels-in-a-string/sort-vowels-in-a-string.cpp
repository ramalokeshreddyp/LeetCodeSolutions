class Solution {
public:
   string sortVowels(string s) {
    unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
    priority_queue<char, vector<char>, greater<char>> pq;

    for (char ch : s) {
        if (vowels.count(ch)) pq.push(ch);
    }

    for (char &ch : s) {
        if (vowels.count(ch)) {
            ch = pq.top();
            pq.pop();
        }
    }

    return s;
}

};
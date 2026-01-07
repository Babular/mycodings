class Solution {
public:
    vector<string> generateParenthesis(int n) {
        return genParenRecur(n, n);
       
    }
    vector<string> genParenRecur(int num_open_rem, int num_closed_rem) {
        vector<string> result;
        if (num_open_rem == 0 && num_closed_rem == 0) {
            result.push_back("");
        }
        if (num_open_rem > 0) {
            cout << "num_open_rem: " << num_open_rem << endl;
            for (auto s : genParenRecur(num_open_rem-1, num_closed_rem)) {
                result.push_back("(" + s);
                cout << "s: " << s << endl;
            }
        }
        if (num_closed_rem > num_open_rem) {
            for (auto s : genParenRecur(num_open_rem, num_closed_rem-1)) {
                result.push_back(")" + s);
            }
        }
        return result;
    }
};
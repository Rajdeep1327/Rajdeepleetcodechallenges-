
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (string ele : operations) {
            if (ele == "C") {
                st.pop();
            }
            else if (ele == "D") {
                st.push(2 * st.top());
            }
            else if (ele == "+") {
                int top = st.top();
                st.pop();

                int sum = top + st.top();

                st.push(top);
                st.push(sum);
            }
            else {
                st.push(stoi(ele));
            }
        }

        int total = 0;

        while (!st.empty()) {
            total += st.top();
            st.pop();
        }

        return total;
    }
};

class MinStack {
public:
    stack<long long> st;
    long long mini;

    MinStack() {

    }

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            mini = val;
        }
        else {
            if (val >= mini) {
                st.push(val);
            }
            else {
                st.push(2LL * val - mini);   // Store encoded value
                mini = val;                  // Update minimum
            }
        }
    }

    void pop() {
        if (st.empty()) return;

        if (st.top() >= mini) {
            st.pop();
        }
        else {
            // Encoded value
            mini = 2LL * mini - st.top();
            st.pop();
        }
    }

    int top() {
        if (st.top() >= mini) {
            return st.top();
        }
        else {
            // Encoded value means actual top is mini
            return mini;
        }
    }

    int getMin() {
        return mini;
    }
};
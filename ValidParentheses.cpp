    
bool isValid(string s) {

	stack<char> st; // declare char stack
    
        for ( char c : s ) { // add opening brackets to stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c); // push opening brackets to strack
            } else if (c == ')' && !st.empty() && st.top() == '(') { // Check for empty stack before top()
                st.pop(); // pop if stack top bracket opens current closing bracket
            } else if (c == '}' && !st.empty() && st.top() == '{') { // Check for empty stack before top()
                st.pop(); // pop if stack top bracket opens current closing bracket
            } else if (c == ']' && !st.empty() && st.top() == '[') { // Check for empty stack before top()
                st.pop(); // pop if stack top bracket opens current closing bracket
            } else {
                return false;
            }
        }

        if (!st.empty()) { // if there are any remaining entries, algo fails
            return false;
        }

	return true;
}

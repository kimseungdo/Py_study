class Solution {
public:
    static unordered_map< char, char > OPEN_TO_CLOSE;
    static unordered_map< char, char > CLOSE_TO_OPEN;
    bool isValid(string s) {
        stack< char > opensStack;
        
        for ( int i = 0; i < s.size(); ++i ) {
            if ( OPEN_TO_CLOSE.find( s[ i ] ) != OPEN_TO_CLOSE.end() ) {
                opensStack.push( s[ i ] );
            } else if ( CLOSE_TO_OPEN.find( s[ i ] ) != CLOSE_TO_OPEN.end() ) {
                if ( opensStack.empty() ) return false;
                if ( opensStack.top() != CLOSE_TO_OPEN[ s[ i ] ] ) {
                    return false;
                }
                opensStack.pop();
            }
        }
        
        return opensStack.empty();
    }
};

unordered_map< char, char > Solution::OPEN_TO_CLOSE = {
    { '[', ']' },
    { '(', ')' },
    { '{', '}' },
};

unordered_map< char, char > Solution::CLOSE_TO_OPEN = {
    { ']', '[' },
    { ')', '(' },
    { '}', '{' },
};
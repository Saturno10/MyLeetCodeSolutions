class Solution {
public:
    bool isValid(string s){
        stack<char> pila;
        for(char letra : s){
            switch (letra) {
                case '(':
                case '[':
                case '{':
                    pila.push(letra);
                    break;
                case ')':
                    if (pila.empty() || pila.top() != '(') return false;
                    pila.pop();
                    break;
                case ']':
                    if (pila.empty() || pila.top() != '[') return false;
                    pila.pop();
                    break;
                case '}':
                    if (pila.empty() || pila.top() != '{') return false;
                    pila.pop();
                    break;
                default:
                    break;
            }
        }
        return pila.empty();
    }
};

/*QUESTION
JAVA PROGRM-BALANCED BRAKET*/


import java.util.Stack;
public class Main {

	public static boolean brackets(String in) {
		Stack<Character> s = new Stack();
		for (char c : in.toCharArray()) {
			if (s.empty()) {
				s.push(c);
				continue;
			}
			char last = s.peek();
			
			switch (c) {
			case ')':
				if (last != '(') {
					return false;
				}
				s.pop();
				break;
			case '}':
				if (last != '{') {
					return false;
				}
				s.pop();
				break;
			case ']':
				if (last != '[') {
					return false;
				}
				s.pop();
				break;
			default:
				if (c=='(' || c=='[' || c=='{') {
					s.push(c);
				}
				if (c==')' || c==']' || c=='}') {
					return false;
				}
				break;
			}
		}
		return true;
	}
	public static void main(String[] args) {
		System.out.println(brackets("()[]{}(([])){[()][]}")); // true
		System.out.println(brackets("())[]{]{}")); // false
	}
}

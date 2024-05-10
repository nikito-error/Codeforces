import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class B_DifferentStrings {
	public static String rearrangeString(String input) {
		String shuffled = input;
		do {
			shuffled = shuffleString(input);
		} while (shuffled.equals(input));
		return shuffled;
	}

	private static String shuffleString(String input) {
		List<Character> charList = new ArrayList<>();
		for (char c : input.toCharArray()) {
			charList.add(c);
		}
		Collections.shuffle(charList);
		StringBuilder shuffledString = new StringBuilder();
		for (char c : charList) {
			shuffledString.append(c);
		}
		return shuffledString.toString();
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			String s = scanner.next();
			boolean flag = false;
			int idx = -1;
			char zero = s.charAt(0);

			for (int i = 1; i < s.length(); i++) {
				if (zero != s.charAt(i)) {
					flag = true;
					idx = 1;
					break;
				}
			}

			if (!flag) {
				System.out.println("NO");
			} else {
				System.out.println("YES");
				String shuffled = rearrangeString(s);
				System.out.println(shuffled);
			}
		}
	}
}

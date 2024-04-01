import java.util.Scanner;

public class C_ClockConversion {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		boolean bISAm = false;
		for (int i = 0; i < t; i++) {
			String s = scanner.next();
			String subHour = s.substring(0, 2);
			String subMin = s.substring(3, 5);
			int nHour = Integer.parseInt(subHour);
			int nMinute = Integer.parseInt(subMin);

			if (nHour >= 12 && nMinute >= 0 || nHour == 0) {
				if (nHour != 12) {
					nHour -= 12;
				}
				if (nHour < 0) {
					nHour = Math.abs(nHour);
					bISAm = true;
				} else {
					bISAm = false;
				}
				String result = s.substring(2);
				String numString = String.format("%02d", nHour);
				result = numString + result;
				if (bISAm) {
					result += " AM";
				} else {
					result += " PM";
				}
				System.out.println(result);
			} else {
				s += " AM";
				System.out.println(s);
			}
		}
	}
}

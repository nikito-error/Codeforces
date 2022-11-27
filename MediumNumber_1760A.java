package solutions;

import java.util.Scanner;
import java.util.SortedSet;
import java.util.TreeSet;

public class MediumNumber_1760A {
	static Scanner scanner = new Scanner(System.in);
	public static void main(String []args) {
		SortedSet<Long> numbers=new TreeSet<Long>();
		long t=scanner.nextLong();
		for(long i=0;i<t;i++) {
			long a=scanner.nextLong();
			numbers.add(a);
			long b=scanner.nextLong();
			numbers.add(b);
			long c=scanner.nextLong();
			numbers.add(c);
			int index0=0;
			for(Long element:numbers) {
				if(1==index0) {
					System.out.println(element);
					break;
				}
				index0++;
			}
			numbers.clear();
		}
}
}

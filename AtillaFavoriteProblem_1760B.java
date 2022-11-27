package solutions;

import java.util.Scanner;

public class AtillaFavoriteProblem_1760B {
	static Scanner scanner=new Scanner(System.in);
	public static void main(String[] args) {
		long t=scanner.nextLong();
		for(long i=0;i<t;i++) {
			int n=scanner.nextInt();
			int max=0;
			String f=scanner.next();
			String alpha ="abcdefghijklmnopqrstuvwxyz";
			for(int k=0;k<n;k++) {
			char d=f.charAt(k);
			if(max<alpha.indexOf(d)+1) {
				max=alpha.indexOf(d)+1;
			}
			}
			System.out.println(max);
 
	
			
		}
	}
}